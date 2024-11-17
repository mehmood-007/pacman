     //////////   ////////   ///////////             ////       ////    ////////    ////        //
    //      //   //    //   //                      //  //   //  //    //    //    //  //      //
   //////////   ////////   //            ///////   //     //    //    ////////    //    //    //
  //           //    //   //                      //           //    //    //    //      //  // 
 //           //    //   /////////////           //           //    //    //    //        ////                

/*
Name:PAC MAN 
Copyright:2009
Author:Mehmood Saleem 
*/
                
#include <allegro.h>
#include <stdio.h>
#include "menu.h"
#include "revival.h"
#include "block.h"
#include <fstream.h>
#include <string.h>  


void revivals(void);
void draw(int,int);
void back(void);
void end_game(void);
void new_game(void);
void check(void);
void off(void);
void stage(void);
void invisible(void);



int main(){
const int t=4;   

  in_x[0]=294;
  in_x[1]=294; 
  in_y[0]=228;
  in_y[1]=228;     
    mode();
    load();
    if (install_sound(DIGI_AUTODETECT, MIDI_NONE, "") != 0) 
    {
   //   allegro_message("Error initializing sound system");
     // return 1;
    }    

play_sample(sample2, 0, panning, pitch, TRUE);       
play_sample(music, 0, panning, pitch,TRUE);
while(!key[KEY_W])
{           
if ( first<=2000 ){
first++;
adjust_sample(sample2,255,panning,pitch,TRUE);
adjust_sample(music,0,panning,pitch,TRUE);
}
next=0;

if( first>2000 ){
 first++;     
  
  adjust_sample(sample2,0,panning,pitch,TRUE);
  
   adjust_sample(music,255,panning,pitch,TRUE);

   if(first>=3200){
  
  first=0;
}
}
clear_bitmap(buffer);

draw_sprite(buffer,intr,0,0);
 
 //textprintf_ex(buffer,font,0,0,makecol(255,255,255),0,"%d",first);

//textprintf_ex(buffer,font,0,0,makecol(255,255,255),0,"%d,   %d",mouse_x,mouse_y);
click();
set_mouse_sprite(cursor);
show_mouse(buffer);


if( key1[0]==1 ){
 
show_mouse(NULL);
 
 draw_sprite(buffer,scr,0,0);            
  
  textprintf_ex(buffer,font,76,410,makecol(255,255,255),0,"%dLOADING...",ch10);
    
    rectfill(buffer,76,420,100+ch10,440,makecol(255,0,0));
 
     ch10=ch10+5;
}

if(key1[1]==1){

credits();                
 
}


if(ch10>=700)
{

clear_bitmap(buffer);
 adjust_sample(music,0,panning,pitch,TRUE);
adjust_sample(sample2,0,panning,pitch,TRUE);
if(rad==0){play_sample(wao,255,panning,pitch,TRUE);}     

play_sample(start,volume,panning,pitch,FALSE);



while(1)
{
//play_sample(wao,volume,panning,pitch,FALSE);
//clear_keybuf();       
pics();
intro();
num++;
end_game();

if(again==1){again=0; break;}

 check();
 
 invisible();

if( key[KEY_P] ){
 
 textout_ex(screen,f1, "PAUSE",294 ,234 , makecol( 255,0,255), makecol(0,0,0) );    
  
  while (!key[KEY_ENTER]);
}
for(j=0;j<4;j++)
{   
 blit(background,buffer,0,0,85,0,800,600); 

//textprintf_ex(buffer,f1,0,0,makecol(255,255,255),0,"width=%d height=%d",x, y);

scoring();

stage();
 
xold[ch1]=x_prev;

yold[ch1]=y_prev;
for(i=0;i<=ch1;i++){

  draw(xold[i],yold[i]);
}
x_prev=x;
y_prev=y; 
ch1++; 
masked_blit(left,buffer, j*25,0,x,y,25,30);

revivals();


//algorithm for colission detection 
for(i=0;i<=1;i++){
  if(x<=in_x[i]+28){ 
   
    if(y<=in_y[i]+29){
        
        if(in_x[i]<=x+24){
             
             if(in_y[i]<=y+27){

                  if(save_key==0 && out==0){ 

textout_ex(screen,f1,"YOU DIED!!",255,234,makecol( 255,0,0),makecol(0,0,0));    
 
 textout_ex(screen,f1,"PRESS SPACE",245,260,makecol( 255,0,0),makecol(0,0,0));    

 adjust_sample(wao,0,panning,pitch,TRUE);

while (!key[KEY_SPACE]);

back();

}

else if( (save_key==1 || repeat[0]==1) && i==0){
     
play_sample(tiao,255,panning,pitch,FALSE);
blin=1;
blinky=eye;
repeat[1]=1;
repeat[0]=0;
save_key=0;
out=1;
}
else if( (save_key==1 || repeat[1]==1) && i==1 ){

pinky=eye;
 
pin=1;

save_key=0;

out=1;

repeat[0]=1;

repeat[1]=0;

play_sample(tiao,255,panning,pitch,FALSE);
}
}
}
}
}
}

///////////////////////////////////////////////////////
if(alter>=29 && blin==1){

blin=0;

in_x[0]=294;

in_y[0]=228;

ch=0;
}
if(alter>=29 && pin==1){

pin=0;

in_x[1]=294;

in_y[1]=228;

ch3=0;
}


if(num>=24){

game();

move1();

move2();

ch++;

ch3++;

adjust_sample(wao,volume,panning,pitch,TRUE);

}
if(num<=24){
textout_ex(buffer,f1, "READY!!",268,172 , makecol( 255,255,0), 0 ); 
adjust_sample(wao,0,panning,pitch,TRUE);
}
hold();
off();
blit(buffer,screen,0,0,0,0,800,600);             
rest(45);
}

}

}

blit(buffer,screen, 0, 0, 0,0,800,600);    
rest(1);

}

allegro_exit();
return 0;    
}   
END_OF_MAIN();


void end_game(void){

if(lives==0 || key[KEY_ESC] ){
rad=1;
next=0;
background=load_bitmap("images\\background.pcx", NULL);
clear_bitmap(buffer);
draw_sprite(screen,name,0,0);
//adjust_sample(wao,0,panning,pitch,TRUE);            
adjust_sample(wao,0,panning,pitch,TRUE);
adjust_sample(wao,0,panning,pitch,TRUE);
adjust_sample(wao,0,panning,pitch,TRUE);
adjust_sample(wao,0,panning,pitch,TRUE);

ifstream infile("prev_score.TXT");
while(!key[KEY_SPACE]){ 
while(!infile.eof())           //until end-of-file
{ 
infile.getline(buffer3,5000);  //read a line of text
if(numeric>=9){ break; }
strcat(str,buffer3);
increment2=increment2+10;
str[strlen(str)]='\n';
numeric++;
}
ofstream outfile("prev_score.TXT");
while(go!=4){

textprintf_ex(screen,f1,0,0,makecol(0,255,0),0,"YOUR SCORE IS %d",score);

textout_ex(screen,f1,"ENTER YOUR NAME:",0 ,50 , makecol( 255,0,255), makecol(0,0,0) );    

clear_keybuf();

string[increment]=readkey();

textprintf_ex(screen,f1,increment1,50,makecol(255,255,255),0,"%c",string[increment]);

increment++;
increment1=increment1+20;
go++;
}
outfile<<string<<"  "<<score<<"\n";
outfile<<str;

strupr(string);

strupr(str);

if(one==0){

ofstream outtfile("new_score.TXT");

outtfile<<string<<"  "<<score<<"\n";

outtfile<<str;

one++;

}

ifstream intfile("new_score.TXT"); 

if(two==0){

while( !intfile.eof() )           //until end-of-file
{ 

intfile.getline(buffer2,5000);  //read a line of text

if(two==0){col1=makecol(0,255,0);}

else if(two==1){col1=makecol(255,0,0);}

else if(two==2){col1=makecol(0,0,255);}

else if(two==3){col1=makecol(255,0,255);}

else if(two==4){col1=makecol(128,0,128);}

else if(two==5){col1=makecol(255,255,0);}

else if(two==6){col1=makecol(255,128,0);}

else if(two==7){col1=makecol(255,0,128);}

else if(two==8){col1=makecol(128,128,64);}

else if(two==9){col1=makecol(255,255,0);}

else  {col1=makecol(255,255,255);}

textprintf_ex(screen,f1,200,increment2,col1,0,"%s",buffer2);

increment2=increment2+40;

rest(1000);

//if(two==1){col1=makecol(255,255,0); }

two++;

}

}

new_game();


rest(1000);
break;
//exit(0);

rest(45);
}
//rest(3000);
//exit(0);
}
}
void new_game(){
lives=3;
again=1;
pin=1;blin=1;
go=0;h=0;
numeric=0;
increment=0;
increment1=290;
increment2=45;
in_x[0]=294;
in_x[1]=294; 
in_y[0]=228;
in_y[1]=228;
two=0;
one=0;     
num=0;
save_score=score;
score=0;alter=0;
ch=0;ch1=0;ch2=0;ch3=0;ch10=0;ch11=0;
magic=0;magic2=0;magic3=0;magic4=0;
x=300;y=276;
x_prev=0;y_prev=0;
inc2=0;inc_left2=0;
inc=0;inc_left=0;
fix=0;fixe=0;out=0;acid=0;zero=0;
key1[0]=0;
save_key=0;out=0;
blinky=load_bitmap("images\\blinky.pcx", NULL);
pinky=load_bitmap("images\\pinky.pcx", NULL);
for(i=0;i<10;i++){repeat[i]=0;}
for(j=0;j<30;j++){
for(i=0;i<1000;i++){
flag[j][i]=0;
}
}
for(i=0;i<5000;i++){
xold[i]=0;
yold[i]=0;
}
for(i=0;i<50;i++){
max_y[i]=0;
max_x[i]=0;
}
first=0;

}



void off(void){
if(pin==1 || blin==1){
adjust_sample(dush,0,panning,pitch,FALSE);
}     

}

void check(void){
if( (x==102 || x==108) && y==330 && flag[16][0]==0){
flag[16][0]=1;
alter=0;
save_key=1;
out=1;
pinky=save;
blinky=save;

play_sample(voice,volume,panning,pitch,FALSE);

play_sample(dush,55,panning,pitch,FALSE);

}
if(x==492 && (y==330 || y==336) && flag[16][1]==0){
flag[16][1]=1;
alter=0;
save_key=1;
out=1;
pinky=save;
blinky=save;
play_sample(voice,volume,panning,pitch,FALSE);
play_sample(dush,55,panning,pitch,FALSE);

}
if( (x==480 || x==486 || x==474) && (y==132 || y==138) && flag[16][2]==0){      
flag[16][2]=1;
alter=0;
save_key=1;
out=1;
pinky=save;
blinky=save;
play_sample(voice,volume,panning,pitch,FALSE);

play_sample(dush,55,panning,pitch,FALSE);
}
if( (x==102 || x==108) && (y==132 || y==138) && flag[16][3]==0){      
flag[16][3]=1;
alter=0;
save_key=1;
out=1;
pinky=save;
blinky=save;
play_sample(voice,volume,panning,pitch,FALSE);

play_sample(dush,55,panning,pitch,FALSE);


}
}
void invisible(void){

if(out==1){
alter++;
//textprintf_ex(buffer,f4,600,0,makecol(255,255,255),0,"alter=%d",alter);
}
if(alter==30){
blinky=load_bitmap("images\\blinky.pcx", NULL);
pinky=load_bitmap("images\\pinky.pcx", NULL);
out=0;
save_key=0;
}

}
void back(void){

x=300;
y=276;
in_x[0]=294;
in_x[1]=294; 
in_y[0]=228;
in_y[1]=228;
lives--;
ch=0;
ch3=0;
}
void stage(void){

 
if(score>=192 && next==0){
if(flag[16][0]==1 && flag[16][1]==1 && flag[16][2]==1 && flag[16][3]==1 )
{
             
draw_sprite(screen,sg_2,85,0);
textout_ex(screen,f1, "             CONGRATULATION",0 ,234 , makecol( 255,0,255), makecol(0,0,0) );    
textout_ex(screen,f1, "      YOU PASS TO THE NEXT STAGE ",0 ,270 , makecol( 0,255,0), makecol(0,0,0) );    

while(!key[KEY_ENTER]);
background=sg_2;
next=1;
new_game();
score=save_score;
x=300;
y=276;
in_x[0]=294;
in_x[1]=294; 
in_y[0]=228;
in_y[1]=228;
score=score+3;
ch=0;
ch3=0;
ch1=0;
again=0;
}
}
else if(score>=397){
lives=0;
textout_ex(screen,f1, "             CONGRATULATION",0 ,234 , makecol( 255,0,255), makecol(0,0,0) );    
textout_ex(screen,f1, "      YOU CLEAR THE GAME ",0 ,270 , makecol( 0,255,0), makecol(0,0,0) );    
while(!key[KEY_ENTER]);
end_game();
}
}

void draw(int x_prev,int y_prev){
blit(lin,buffer,0,0,x_prev,y_prev,24,28);
}
void revivals(void){
draw_sprite(buffer,blinky,in_x[0],in_y[0]);         
draw_sprite(buffer,pinky,in_x[1],in_y[1]);              
}
