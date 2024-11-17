#ifndef BLOCK_H
#define BLOCK_H


#include <allegro.h>
//#include <fstream.h>
#include "menu.h"
#include "revival.h"


void hold(void){
//for left down
int j;

if(x==96 ){                           
x=x+6;
}

for(i=150;i<=168;i++){
if( ( x==264 &&  y==i) ){                           
x=x+6;
}
else if( ( x==336 &&  y==i) ){
x=x-6; 
}
}


for(i=240;i<=324;i++){
if( (x==174 || x==168 ) && ( y==i ) ){              
x=x+6;
}
}
for(i=144;i<=222;i++){
if( (x==174 ) && ( y==i) ){                  
x=x+6;
}
}
for(i=150;i<=216;i++){
if( (x==222 || x==408 ) && ( y==i) ){                  
x=x+6;
}
}
for(i=18;i<=120;i++){
if( (x==474 ) && ( y==i) ){                  
x=x+6;
}
}
for(i=360;i<=486;i++){
if( (x==486 ) && ( y==i) ){                  
x=x+6;
}
}

for(i=252;i<=336;i++){
if( (x==222 || x==408 ) && ( y==i) ){                  
x=x+6;
}
}
for(i=288;i<=328;i++){
if((x==366) && ( y==i ) ){                           
x=x+6;
}
}
for(k=192;k<=264;k++){
if( ( x==366 || x==270 )  && ( y==k ) ){                           
x=x+6;
}
}
if((x==288) && ( y==204 || y==198 || y==210 || y==192) ){                           
x=x+6;
}
for(i=516;i<=558;i++){
if((x==198 || x==324 || x==450) && y==i){                           
x=x+6;
}
}


//for right stop
for(i=246;i<=318;i++){
if((x==420) && y==i){                           
x=x-6;
}
}
for(i=150;i<=222;i++){
if((x==186 || x==378) && y==i){                           
x=x-6;
}
}


if((x==306) && ( y==204 || y==198 || y==192 || y==210) ){                           
x=x-6;
}

for(i=252;i<=336;i++){
if((x==186 || x==378) && y==i){                           
x=x-6;
}
}

for(i=288;i<=318;i++){
if( ( x==234 )  && ( y==i ) ){                           
x=x-6;
}
}


for(k=192;k<=264;k++){
if( ( x==234 )  && ( y==k ) ){                           
x=x-6;
}
}

for(k=198;k<=264;k++){
if( ( x==330 )  && ( y==k ) ){                           
x=x-6;
}
}


for(i=18;i<=600;i++){
if(x==498 && ( y==i ) && ( y!=234 ) )
{    
x=x-6;
}
}

for(i=18;i<=126;i++){
if((x==108) && y==i){                           
x=x-6;
}
}

for(i=516;i<=558;i++){
if((x==108 || x==234 || x==354) && y==i){                           
x=x-6;
}
}


for(i=354;i<=492;i++){
if( ( x==108 )  && ( y==i) ){                  
x=x-6;
}
}

for(i=144;i<=222;i++){
if( (x==420 ) && ( y==i) ){                  
x=x-6;
}
}
for(i=324;i<=348;i++){
if( (x==276 ) && ( y==i) ){                  
x=x-6;
}
else if( (x==324 ) && ( y==i) ){                  
x=x+6;
} 
}



//down stop
  

for(i=96,j=426;i<=168,j<=498;i++,j++){
if((x==i ||  x==j ) &&  (y==240 || y==144 )){   
y=y-6;        
}  
}
for(i=114;i<=480;i++){
if( x==i  &&  ( y==354 ) ){   
y=y-6;        
}  
}
for(i=192;i<=252;i++){
if( x==i  &&  ( y==144 ) ){   
y=y-6;        
}  
}
for(i=348;i<=402;i++){
if( x==i  &&  ( y==144 ) ){   
y=y-6;        
}  
}

for(i=240;i<=282;i++){
if( ( x==i ) &&  ( y==186 ) ){   
y=y-6;        
}  
}
for(i=312;i<=360;i++){
if( ( x==i ) &&  ( y==186 ) ){   
y=y-6;        
}  
}
for(i=192,j=384;i<=216,j<=408;i++,j++){
if( ( x==i || x==j )&&  ( y==246 ) ){   
y=y-6;        
}  
}
for(i=240;i<=360;i++){
if( x==i  &&  ( y==282 ) ){   
y=y-6;        
}  
}
for(i=240;i<=360;i++){
if( x==i  &&  ( y==240 ) ){   
y=y-6;        
}  
}
//,j<=324,j=240
for(j=240,i=108,k=360;j<=330,i<=210,k<=444;j++,i++,k++){
if( (x==i  ||  x==j || x==k) &&  ( y==510 )){   
y=y-6;
}  
}
if(y==576){               
y=y-6;                         //yuneeb ashraf k08036
}       

//for up stop

for(i=102,j=426;i<=156,j<=498;i++,j++){
if( (x==i || x==162  || x==j) &&  y==228){       
  y=y+6;        
}  
}

if(y==12){             
y=y+6;
}

//,j<=324,j=240
for(j=240,i=108,k=360;j<=330,i<=204,k<=444;j++,i++,k++){
if( (x==i  ||  x==j || x==k) &&  ( y==564 )){   
y=y+6;
}  
}

for(i=228;i<=258;i++){
if(x==i && y==174){              
y=y+6;
}
}
for(i=192;i<=216;i++){
if(x==i && y==228 ){              
y=y+6;
}
}
for(i=384;i<=408;i++){
if(x==i && y==216 ){              
y=y+6;
}
}

for(i=348;i<=372;i++){
if(x==i && y==174){              
y=y+6;
}
}

for(i=426;i<=498;i++){
if(x==i && y==324){              
y=y+6;
}
}


if( ( x==276 || x==324 ) && y==216){              
y=y+6;
}

for(i=192,j=384;i<=216,j<=408;i++,j++){
if( ( x==i || x==j ) && y==336){              
y=y+6;
}
}
for(i=114;i<=252;i++){
if(x==i && y==480){              
y=y+6;
}
}
for(i=102;i<=162;i++){
if( x==i  && y==324){               
y=y+6;
}
}
if(x==132 && y==408){      
y=y+6;
}
for(i=114;i<=468;i++){
if( (x==i ) && ( y==126) ){                  
y=y+6;
}
}

for(i=234;i<=366;i++){
if( x==i  && y==318){               
y=y+6;
}
}
for(i=240;i<=360;i++){
if( x==i  &&  ( y==270 ) ){   
y=y+6;        
}  
}

for(i=114;i<=480;i++){
if( x==i  &&  ( y==498 )){   
y=y+6;        
}  
}
//invisible
if( (x==102 ) && ( y==234) ){                  
x=x+402;
}
if( (x==510 ) && ( y==234) ){                  
x=612-x;
}
}

void intro(void){
textprintf_ex(buffer,f3,600,10,makecol(255,255,0),-1,"pac");
textprintf_ex(buffer,f3,600,80,makecol(255,255,0),-1,"man");
textprintf_ex(buffer,f2,609,150,makecol(255,0,255),-1,"MEHMOOD SOFTWARE");
textprintf_ex(buffer,f2,609,170,makecol(255,0,255),-1,"(c) copyright 2009");
textprintf_ex(buffer,f1,620,250,makecol(0,255,0),0,"SCORE=%d",score);
textprintf_ex(buffer,f1,625,290,makecol(0,255,0),0,"LIVES=%d",lives);
}

void scoring(void)
{

for(k=102,h=0;k<=500,h<500;k=k+18,h++){
if( (x==k ) && (y==132 || y==138 ) ){ 
if(flag[0][h]==0){ 
score++;
play_sample(sample1, 255, panning, 1000,FALSE);      
//rest(15);
//volume=255;
flag[0][h]=1;
break;
}            
}
}

for(k=126,h=0;k<=276,h<100;k=k+18,h++){
if( ( x==k ) && (y==348 || y==342) ){ 
if(flag[1][h]==0){ 
if(k>=277){
break;
}
score++;
play_sample(sample1,255, panning, pitch,FALSE);      
flag[1][h]=1;
break;
}
}
}

for(k=330,h=0;k<=474,h<100;k=k+18,h++){
if( ( x==k ) && (y==348 || y==342 ) ){ 
if(flag[21][h]==0){ 
if(k>=475){
break;
}
score++;
play_sample(sample1,255, panning, pitch,FALSE);      
flag[21][h]=1;
break;
}
}
}


for(k=348,h=0;k<=570,h<500;k=k+18,h++){
if( ( x==102  ) && (y==k) ){ 
if(flag[2][h]==0){ 
score++;
play_sample(sample1, 255, panning, pitch,FALSE);      
flag[2][h]=1;
break;
}
}
}
for(k=348,h=0;k<=570,h<500;k=k+18,h++){
if( ( x==492  ) && (y==k) ){ 
if(flag[24][h]==0){ 
score++;
play_sample(sample1, 255, panning, pitch,FALSE);      
flag[24][h]=1;
break;
}
}
}



for(k=132,h=0;k<=348,h<500;k=k+18,h++){
if( (x==180   ) && (y==k) ){ 
if(flag[4][h]==0){ 
score++;
play_sample(sample1, 255, panning, pitch,FALSE);      
flag[4][h]=1;
break;
}
}
}
for(k=132,h=0;k<=348,h<500;k=k+18,h++){
if( (x==372  ) && (y==k) ){ 
if(flag[5][h]==0){ 
score++;
play_sample(sample1, 255, panning, pitch,FALSE);      
flag[5][h]=1;
break;
}
}
}

for(k=156,h=0;k<=336,h<500;k=k+18,h++){
if( (x==414) && (y==k)){ 
if(flag[6][h]==0){
if(k>336){
break;
} 
score++;
play_sample(sample1, 255, panning, pitch,FALSE);      
flag[6][h]=1;
break;
}
}
}

for(k=198,h=0;k<=300,h<500;k=k+18,h++){
if( (x==228 ) && (y==k) ){ 
if(flag[7][h]==0){
//////new
if(k>306){
break;
}
score++;
play_sample(sample1, 255, panning, pitch,FALSE);      
flag[7][h]=1;
break;
}
}
}
for(k=522,h=0;k<=558,h<500;k=k+18,h++){
if( (x==204) && (y==k) ){ 
if(flag[19][h]==0){ 
score++;
play_sample(sample1, 255, panning, pitch,FALSE);      
flag[19][h]=1;
break;
}
}
}
for(k=522,h=0;k<=558,h<500;k=k+18,h++){
                                       
if( (x==216 || x==228 || x==222) && (y==k) ){ 
if(flag[22][h]==0){ 
score++;
play_sample(sample1, 255, panning, pitch,FALSE);      
flag[22][h]=1;
break;
}
}
}

for(k=228,h=0;k<=372,h<500;k=k+18,h++){
if( (x==k) && (y==180) ){ 
if(flag[8][h]==0){ 
score++;
play_sample(sample1, 255, panning, pitch,FALSE);      
flag[8][h]=1;
break;
}
}
}

for(k=228,h=0;k<=360,h<500;k=k+18,h++){
if( (x==k) && (y==330 || y==324 || y==336) ){ 
if(flag[9][h]==0){ 
if(x>=374){
break;}
score++;
play_sample(sample1, 255, panning, pitch,FALSE);      
flag[9][h]=1;
break;
}
}
}

for(k=204,h=0;h<3,k<=216;h++,k=k+12){
if( (x==k ) && ( y==234 || y==240) ){ 
if(flag[11][h]==0){ 
score++;
play_sample(sample1, 255, panning, pitch,FALSE);      
flag[11][h]=1;
break;
}
}
}
for(k=384,h=0;h<2,k<=420;h++,k=k+18){
if( (x==k ) && ( y==234 || y==240 || y==228 || y==222) ){ 
if(flag[20][h]==0){ 
if(k>=420){
break;
}
score++;
play_sample(sample1, 255, panning, pitch,FALSE);      
flag[20][h]=1;
break;
}
}
}


for(k=120,h=0;k<=462,h<500;k=k+18,h++){
if( (x==k) && (y==504 || y==510)){ 
if(flag[12][h]==0){ 
if(k>462){
break;}
score++;
play_sample(sample1, 255, panning, pitch,FALSE);      
flag[12][h]=1;
break;
}
}
}
for(k=522,h=0;k<=558,h<500;k=k+18,h++){
if( (x==340 || x==348) && (y==k)){ 
if(flag[14][h]==0){ 
score++;
play_sample(sample1, 255, panning, pitch,FALSE);      
flag[14][h]=1;
break;
}
}
}
for(k=522,h=0;k<=558,h<500;k=k+18,h++){
if( (x==330 ) && (y==k)){ 
if(flag[18][h]==0){ 
score++;
play_sample(sample1, 255, panning, pitch,FALSE);      
flag[18][h]=1;
break;
}
}
}

for(k=522,h=0;k<=558,h<500;k=k+18,h++){
if( (x==456 ) && (y==k)){ 
if(flag[15][h]==0){ 
score++;
play_sample(sample1, 255, panning, pitch,FALSE);      
flag[15][h]=1;
break;
}
}
}
for(k=522,h=0;k<=558,h<500;k=k+18,h++){
if( (x==468 || x==474 || x==480) && (y==k)){ 
if(flag[17][h]==0){ 
score++;
play_sample(sample1, 255, panning, pitch,FALSE);      
flag[17][h]=1;
break;
}
}
}
for(k=18,h=0;k<=150,h<500;k=k+18,h++){
if( (y==k) && (x==492 || x==480 ||x==486) ){ 
if(flag[3][h]==0){
if(k>=230){
break;
} 
score++;
play_sample(sample1,255,panning,pitch,FALSE);      
flag[3][h]=1;
break;
}
}
}

/////196 ///196 
for(k=18,h=0;k<=150,h<500;k=k+18,h++){
if( (y==k) && (x==102) ){ 
if(flag[25][h]==0){
if(k>=230){
break;
} 
score++;
play_sample(sample1,255,panning,pitch,FALSE);      
flag[25][h]=1;
break;
}
}
}
for(k=120,h=0;k<=462,h<500;k=k+18,h++){
if( (x==k) && (y==570 ) ){ 
if(flag[23][h]==0){
if(k>468){
break;
} 
score++;
play_sample(sample1, 255, panning, pitch,FALSE);      
flag[23][h]=1;
break;
}
}
}
for(k=270,h=0;k<=330,h<500;k=k+18,h++){
if( (x==k) && (y==162 || y==168 || y==156 ) ){ 
if(flag[26][h]==0){ 
score++;
play_sample(sample1, 255, panning, pitch,FALSE);      
flag[26][h]=1;
break;
}
}
}
}

void game(void){
     
if (key[KEY_UP]){              
magic=1;
}
else if (key[KEY_DOWN]){
magic=0;   
magic2=1;
}
else if (key[KEY_RIGHT]) {
magic=0;   
magic2=0;
magic3=1;
}
else if (key[KEY_LEFT]) {        
magic=0;   
magic2=0;
magic3=0;   
magic4=1;
}
if(magic==1){
y=y-6;
left=load_bitmap(up, NULL);
}
else if(magic2==1){
y=y+6;    
left=load_bitmap(down, NULL);
}
else if(magic3==1){
x=x+6;
left=load_bitmap(right, NULL);
}
else if(magic4==1){
x=x-6;
left=load_bitmap(spritename, NULL);
}
else                          
{                          
x=x-6;
left=load_bitmap(spritename, NULL);
}  
}

#endif
