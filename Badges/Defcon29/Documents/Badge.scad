//Keycaps for Defcon 29 badge
//William Rickert
//4/20/21


include <KeyV2/includes.scad>


legends = ["A","B","C","D","E","F","/","7","4","1","Tab","*","8","5","2","0"];
le2 = ["?","9","6","3",".","Backspace","-","+","Enter"];
ent = ["E","n","t","e","r"];

/*
//Row 0
//A
translate_u(0,1) no_stem_support() rounded_cherry()  dcs_row(0) legend(legends[0], [0,0], 6) key();
for (x = [0:1:4]) {
    translate_u(0,-x) no_stem_support() rounded_cherry()  dcs_row(x) legend(legends[(x+1)], [0,0], 6) key();
} 
*/

//Row 1
for (x = [0:1:3]) {
    translate_u(1,-x) no_stem_support() rounded_cherry()  dcs_row(x) legend(legends[x+6], [0,0], 6) key();
} 

//Row 2
//Tab
translate_u(1.5,1) 2u() no_stem_support() rounded_cherry()  dcs_row(0) legend(legends[10], [0,0], 6) key();
for (x = [0:1:3]) {
    translate_u(2,-x) no_stem_support() rounded_cherry()  dcs_row(x) legend(legends[x+11], [0,0], 6) key();
}
//0
translate_u(1.5,-4) 2u() no_stem_support() rounded_cherry()  dcs_row(4) legend(legends[15], [0,0], 6) key();

//Row 3
for (x = [0:1:4]) {
    translate_u(3,-x) no_stem_support() rounded_cherry()  dcs_row(x) legend(le2[x], [0,0], 6) key();
} 

//Row 4
//Backspace
translate_u(3.5,1) 2u() no_stem_support() rounded_cherry()  dcs_row(0) legend(le2[5], [0,0], 3.5) key();
translate_u(4,0) no_stem_support() rounded_cherry()  dcs_row(0) legend(le2[6], [0,0], 6) key();
//+
translate_u(4,-1.5) 2uh() no_stem_support() rounded_cherry()  dcs_row(1) legend(le2[7], [0,0], 6) key();
//Enter
//translate_u(4,-3.5) dcs_row(0) numpad_enter() legend(ent[0], [0,-1.35], 6) legend(ent[1], [0,-.675], 6) legend(ent[2], [0,-0.06], 6) legend(ent[3], [0,0.65], 6) legend(ent[4], [0,1.3], 6) key();
translate_u(4,-3.5) no_stem_support() rounded_cherry()  dcs_row(2) 2uh() legend(ent[0], [0,-1.35], 6) legend(ent[1], [0,-.675], 6) legend(ent[2], [0,-0.06], 6) legend(ent[3], [0,0.65], 6) legend(ent[4], [0,1.3], 6) key();
