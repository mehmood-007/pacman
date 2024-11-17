#ifndef REVIVAL_H
#define REVIVAL_H

#include <allegro.h>
//#include <fstream.h>
#include "menu.h"

void move1(void){

if(ch<=6)
{
in_x[0]=in_x[0]+6;
}
else if(ch<=20  && ch>6){
in_x[0]=in_x[0]-6;
}
else if(ch<=27  && ch>20){
in_x[0]=in_x[0]+6;
}
else if(ch<=42  && ch>27){
in_y[0]=in_y[0]-6;
}
else if(ch<=75 && ch>42){
in_x[0]=in_x[0]-6;
}
else if(ch<=96 && ch>75){
in_y[0]=in_y[0]-6;
}
else if(ch<=117 && ch>96){
in_y[0]=in_y[0]+6;
}
else if(ch<=131 && ch>117){
in_x[0]=in_x[0]+6;
}
else if(ch<=165 && ch>131){
in_y[0]=in_y[0]+6;
}    
else if(ch<=179 && ch>165){
in_x[0]=in_x[0]-6;
}
else if(ch<=216 && ch>179){
in_y[0]=in_y[0]+6;
}
else if(ch<=235 && ch>216){
in_x[0]=in_x[0]+6;
}
else if(ch<=245 && ch>235){
in_y[0]=in_y[0]-6;
}
else if(ch<=266 && ch>245){
in_x[0]=in_x[0]+6;
}
else if(ch<=276 && ch>266){
in_y[0]=in_y[0]+6;
}
else if(ch<=302 && ch>276){
in_x[0]=in_x[0]+6;
}
else if(ch<=338 && ch>302){
in_y[0]=in_y[0]-6;
}
else if(ch<=358 && ch>338){
in_x[0]=in_x[0]-6;
}
else if(ch<=386 && ch>358){
in_y[0]=in_y[0]-6;
}

else if(ch<=398 && ch>386){
in_x[0]=in_x[0]-6;
}

else if(ch<=407 && ch>398){
in_y[0]=in_y[0]+6;
}

else if(ch<=1000 && ch>407){
in_y[0]=228;
in_x[0]=294;
ch=27;
}

}
void move2(void){

if(ch3<=6){
in_y[1]=in_y[1]-6;
}
else if(ch3<=14 && ch3>6){
in_y[1]=in_y[1]+6;
}
else if(ch3<=23 && ch3>14){
in_y[1]=in_y[1]-6;
}
else if(ch3<=35 && ch3>23){
in_x[1]=in_x[1]-6;
}
else if(ch3<=51 && ch3>35){
in_y[1]=in_y[1]+6;
}
else if(ch3<=75 && ch3>51){
in_x[1]=in_x[1]+6;
}
else if(ch3<=86 && ch3>71){
in_y[1]=in_y[1]+6;
}
else if(ch3<=107 && ch3>86){
in_x[1]=in_x[1]+6;
}
else if(ch3<=135 && ch3>107){
in_x[1]=in_x[1]-6;
}
else if(ch3<=150 && ch3>135){
in_x[1]=in_x[1]+6;
}
else if(ch3<=185 && ch3>150){
in_y[1]=in_y[1]-6;
}
else if(ch3<=238 && ch3>185){
in_x[1]=in_x[1]-6;
}
else if(ch3<=302 && ch3>238){
in_x[1]=in_x[1]+6;
}
else if(ch3<=322 && ch3>302){
in_y[1]=in_y[1]-6;
}
else if(ch3<=342 && ch3>322){
in_y[1]=in_y[1]+6;
}
else if(ch3<=373 && ch3>342){
in_x[1]=in_x[1]-6;
}
else if(ch3<=381 && ch3>373){
in_y[1]=in_y[1]+6;
}

else if(ch3<=1000 && ch3>381){
ch3=23;
}
}
void pics(void){
    
blit(l, buffer, 0, 0, 207, 270, 18,71);
blit(l, buffer, 0, 0, 397, 271, 18,71);
blit(design, buffer, 0, 0, 0, 0,99,518);
blit(design_right, buffer, 0, 0, 535, 0,76,518);     
}    

#endif
