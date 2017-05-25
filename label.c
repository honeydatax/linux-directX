#include "directX.h"


void drawbut();
void ddd();

label XX;
label YY;
label BB;


int main(int argc, char ** argv)
{
int a;

XX.c.x=50;
XX.c.y=50;
XX.c.h=16;
XX.c.w=45;
XX.r=0;
XX.g=0;
XX.b=255;

YY.c.x=100;
YY.c.y=50;
YY.c.h=16;
YY.c.w=45;
YY.r=0;
YY.g=0;
YY.b=255;


BB.c.x=150;
BB.c.y=50;
BB.c.h=16;
BB.c.w=45;
BB.r=0;
BB.g=0;
BB.b=255;


int i=0;
int l=0;
char b=0;


   int fbfd = startX(argv[0]);

   
   
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);


ddd();

do{

drawbut();
a=getc(stdin);
}while(a!=27);




endX(fbfd);
    return 0;
}


void drawbut(){
int i=mouseEvent();
if (i==-1){

mouseEvent();
ddd();
}



}

void ddd(){
sprintf(XX.caption,"%d",mouseX);
drawLabel(XX);
sprintf(YY.caption,"%d",mouseY);
drawLabel(YY);
if (left!=0)strcpy(BB.caption,"left");
if (right!=0)strcpy(BB.caption,"right");
if (middle!=0)strcpy(BB.caption,"middle");
drawLabel(BB);




}













