// Some Semihosting stuff to make debugging eaiser
// Use with openocd, need to add the command "monitor arm semihosting enable"
// William Rickert March2020

void send_command(int command, void *message);
void put_char(char c);

void say(char s[]){
   
   uint32_t m[] = { 2/*stderr*/, (uint32_t)s, strlen(s) };
   send_command(0x05, m);
}  

void send_command(int command, void *message)
{
   asm("mov r0, %[cmd];"
     "mov r1, %[msg];"
     "bkpt #0xAB"
        :
        : [cmd] "r" (command), [msg] "r" (message)
        : "r0", "r1", "memory");
}

void put_char(char c)
{
    asm (
      "mov r0, #0x03\n"   /* SYS_WRITEC */
      "mov r1, %[msg]\n"
      "bkpt #0xAB\n"
      :
      : [msg] "r" (&c)
      : "r0", "r1"
      );
}

