bottomHeight = 1.9;
topHeight = 2;

module imports(){
linear_extrude(bottomHeight) import("../Documents/ButtonsBottom.svg");
translate([0,0,bottomHeight]) linear_extrude(topHeight) import("../Documents/ButtonsTop.svg");
}

difference(){
    imports();
    translate([99,88]) cube([11,10,1.9]);
    translate([99,198]) cube([11,15,1.9]);
    translate([65,137]) cube([10,23,1.9]);
    translate([133,137]) cube([10,23,1.9]);
    translate([95,145]) cube([19,8.2,1.9]);
}    

//translate([100,88]) cube([11,15,1.9]);