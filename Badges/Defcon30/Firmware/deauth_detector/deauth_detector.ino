/*

Original project: 
  https://github.com/spacehuhn/DeauthDetector
Applied/adapted these PRs:
  https://github.com/spacehuhn/DeauthDetector/pull/4
  https://github.com/spacehuhn/PacketMonitor/pull/3/files?diff=split

*/


#include <WiFi.h>

#include "Mac.h"


  #include "esp_wifi.h"
  const wifi_promiscuous_filter_t filt={
      .filter_mask=WIFI_PROMIS_FILTER_MASK_MGMT|WIFI_PROMIS_FILTER_MASK_DATA
  };
    
  typedef struct {
    uint8_t mac[6];
  } __attribute__((packed)) MacAddr;
  
  typedef struct {
    int16_t fctl;
    int16_t duration;
    MacAddr da;
    MacAddr sa;
    MacAddr bssid;
    int16_t seqctl;
    unsigned char payload[];
  } __attribute__((packed)) WifiMgmtHdr;


//===== SETTINGS =====//
#define channel 1 //the channel to start scanning (1-14)
#define channelHopping true //scan on all channels
#define maxChannel 11 //US = 11, EU = 13, Japan = 14
#define ledPin 2 //led pin ( 2 = built-in LED)
#define inverted true // invert HIGH/LOW for the LED
#define packetRate 3 //min. packets before it gets recognized as an attack

#define scanTime 500 //scan time per channel in ms

unsigned long count = 0;
unsigned long prevTime = 0;
int curChannel = channel;

void dumpPacket(uint8_t* buf, uint16_t len) {
  if(buf == nullptr || len <= 27)
    return;
    
  Mac from(buf[16],buf[17],buf[18],buf[19],buf[20],buf[21]);
  Mac to(buf[22],buf[23],buf[24],buf[25],buf[26],buf[27]);

  Serial.print("Chan ");
  Serial.println(curChannel);
  Serial.print("From ");
  from._println();
  Serial.print("To ");
  to._println();
  Serial.println();
}



  void sniffer(void* buf, wifi_promiscuous_pkt_type_t type) 

  {

    if (type == WIFI_PKT_MGMT) {
      wifi_promiscuous_pkt_t *p = (wifi_promiscuous_pkt_t*)buf;
      int len = p->rx_ctrl.sig_len;
      WifiMgmtHdr *wh = (WifiMgmtHdr*)p->payload;
      len -= sizeof(WifiMgmtHdr);
      if (len < 0) return;
      int fctl = ntohs(wh->fctl);
      if (fctl == 0x0A || fctl == 0x0C) {
        count++;
        Serial.println("DEAUTH:");
      }
    }
  }


void setup() {
  Serial.begin(115200);

    wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();
    esp_wifi_init(&cfg);
    //esp_wifi_set_country(WIFI_COUNTRY_EU);
    esp_wifi_set_storage(WIFI_STORAGE_RAM);
    esp_wifi_set_mode(WIFI_MODE_NULL);
    esp_wifi_start();
    esp_wifi_set_promiscuous(true);
    esp_wifi_set_promiscuous_filter(&filt);
    esp_wifi_set_promiscuous_rx_cb(&sniffer);
    esp_wifi_set_channel(curChannel, WIFI_SECOND_CHAN_NONE);

  pinMode(ledPin, OUTPUT);
  Serial.println("starting!");
}

void loop() {
  unsigned long curTime = millis();
  unsigned long delta = curTime - prevTime;
  if (delta < scanTime)
    delay(scanTime - delta);

  digitalWrite(ledPin, (count >= packetRate) ^ inverted);  

  Serial.print(curChannel);
  Serial.print(": ");
  Serial.println(count);
  
  prevTime = curTime;
  count = 0;

  if(channelHopping){
    curChannel = curChannel % maxChannel + 1;

      esp_wifi_set_channel(curChannel, WIFI_SECOND_CHAN_NONE);

  }
}
