#ifndef MENU_H
#define MENU_H

#include <allegro.h>
//#include <fstream.h>


int x =300;
int y =276;
int in_x[10];
int in_y[10];
int xl,yl,h=0;
int magic=0;
int magic2=0;
int magic3=0;
int magic4=0;
int score=0,save_score;
int rem_y;
int max_y[50]={0},max_x[50]={0};
int flag[30][1000]={0};
int ch=0,ch1=0,ch2=0; 
int inc=0,inc_left=0;
int inc2=0,inc_left2=0;
int fix=0,fixe=0,out=0;    
int ch3=0,lives=3,alter=0,zero=0,repeat[10]={0};
int i,j,k,acid=0; 
int ch10=0,ch11=0,key1[100]={0};
int x_prev,y_prev,rad=0,never=0;
int num=0,save_key=0,blin=0,pin=0,next=0,again=0;
BITMAP*name;
SAMPLE*voice;
int xold[50000];
int yold[50000];
char string[30];
int  increment=0,col1,increment1=290,increment2=45,numeric=0,go=0,one=0,two=0;
char buffer2[5000],buffer3[5000],str[5000];

char *spritename = "images\\move.bmp";
char *right= "images\\right.pcx";
char *down= "images\\down.bmp";
char *up= "images\\up.pcx";

BITMAP*pac_left;
BITMAP*background;
BITMAP*blank;
BITMAP*blinky;
BITMAP*pinky;
BITMAP*l;
BITMAP*move;
BITMAP*lin; 
BITMAP*design;
BITMAP*design_right;
BITMAP*buffer;
BITMAP*left;
BITMAP*save;
BITMAP*eye;
BITMAP*end;
BITMAP*sg_2;
FONT*f1;
FONT*f2;
FONT*f3;
FONT*f4;
SAMPLE*sample1;
SAMPLE*start;
SAMPLE*wao;
SAMPLE*tiao;
SAMPLE*dush;
BITMAP*credit;
BITMAP*cursor;  
BITMAP*intr;
BITMAP*reflect;
BITMAP*reflect_cre;
BITMAP*reflect_exi;
BITMAP*scr;
SAMPLE*pac;   
FONT*fo;
SAMPLE*sample2;
SAMPLE*music;
int panning=128;
int pitch=1000;
int volume=255,first=0,second=0;
PALETTE palette;


void load(void){
     
     buffer=create_bitmap(800,600);
     credit=load_bitmap("images\\credit.pcx",NULL);
     intr=load_bitmap("images\\intro.pcx",NULL);
     pac_left=load_bitmap("images\\pac left.pcx", NULL);      
     name=load_bitmap("images\\name.pcx", NULL);      
     blank=load_bitmap("images\\blank.pcx", NULL);
     background=load_bitmap("images\\background.pcx", NULL);
     cursor=load_bitmap("images\\cursor.bmp",NULL);    
     l=load_bitmap("images\\l.pcx", NULL);
     lin=load_bitmap("images\\line.pcx", NULL);
     blinky=load_bitmap("images\\blinky.bmp", NULL);
     pinky=load_bitmap("images\\pinky.bmp", NULL);
     design=load_bitmap("images\\design.pcx", NULL);
     save=load_bitmap("images\\save.bmp", NULL);
     eye=load_bitmap("images\\eye.bmp", NULL);
     design_right=load_bitmap("images\\design_righ.pcx", NULL);
     left=load_bitmap(spritename, NULL);
     reflect=load_bitmap("images\\reflect.bmp",NULL);
     reflect_cre=load_bitmap("images\\reflect_cre.bmp",NULL);
     reflect_exi=load_bitmap("images\\reflect_exi.bmp",NULL);
     scr=load_bitmap("images\\ms.pcx",NULL);
     end=load_bitmap("end.bmp",NULL);
     sg_2=load_bitmap("images\\hearts.bmp",NULL);
     fo=load_font("fonts\\fo.pcx",palette,NULL);
     f1=load_font("fonts\\f1.pcx", NULL, NULL);
     f2=load_font("fonts\\f2.pcx", NULL, NULL);
     f3=load_font("fonts\\f3.pcx", NULL, NULL);
     f4=load_font("fonts\\f4.pcx", NULL, NULL);
     sample1=load_sample("sounds\\eating.short.wav");          
     start=load_sample("sounds\\opening song.wav");
     wao=load_sample("sounds\\siren.wav");
     dush=load_sample("sounds\\dush.wav");
     tiao=load_sample("sounds\\tiao.wav");
     music=load_sample("sounds\\music.wav");
     voice=load_sample("sounds\\copy.wav");
     sample2=load_sample("sounds\\start.wav");
    
      
    
}
void credits(void)
{
   show_mouse(NULL);
   draw_sprite(buffer,credit,0,0);         
   textprintf_ex(buffer, fo, 0, 570, makecol(255,255,255), -1, "<-Backspace.");
   textprintf_ex(buffer, fo, 70, 550-ch11, makecol(0,255,255), -1, "programmed by MEHMOOD SALEEM.");
   textprintf_ex(buffer, fo, 70, 550+50-ch11, makecol(255,0,255), -1, "Graphics by YOUSUF.");
   textprintf_ex(buffer, fo, 70, 550+100-ch11, makecol(0,255,0), -1, "Level Design by MEHMOOD SALEEM.");
   textprintf_ex(buffer, fo, 70, 550+150-ch11, makecol(255,255,0), -1,  "Music by MEHMOOD SALEEM.");
   textprintf_ex(buffer, fo, 70, 550+200-ch11, makecol(255,255,255), -1, "Special Thanks To:");
   textprintf_ex(buffer, fo, 70, 550+250-ch11, makecol(255,128,64), -1, "HATAF MOIN.");
   ch11++;
   if((550+300-ch11)<=-5){
   ch11=0;
   }
   if(key[KEY_BACKSPACE]){
   key1[1]=0;
} 
//rest(50);      
}

void click(void){

for(i=13;i<=196;i++){
for(j=400;j<=439;j++){

if(mouse_x==i && mouse_y==j ){
draw_sprite(buffer,reflect,38,395);
if (mouse_b & 1){
key1[0]=1;
} 
}
}

////for credits
for(k=446;k<=483;k++){
if(mouse_x==i && mouse_y==k ){
draw_sprite(buffer,reflect_cre,38,440);
if (mouse_b ){
key1[1]=1;
}
}
}

////for exit
for(k=491;k<=529;k++){
if(mouse_x==i && mouse_y==k ){
draw_sprite(buffer,reflect_exi,38,487);
if (mouse_b & 1){     
rest(400);
exit(0);
} 
}
}
}
}
void mode(void){
allegro_init();
    install_keyboard();
    install_mouse();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT,800,600,0,0);
  
}     
     
  

#endif
