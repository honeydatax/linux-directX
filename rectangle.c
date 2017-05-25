#include "directX.h"


void drawbut();
void tdraw();

int XX=0;
int YY=0;
int BB=0;


int main(int argc, char ** argv)
{
int a;


int i=0;
int l=0;
char b=0;


   int fbfd = startX(argv[0]);

   
   
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);
XX=vinfo.xres/2;
YY=vinfo.yres/2;

tdraw();

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
XX=XX+mouseX;
YY=YY+mouseY;
if (XX>vinfo.xres) XX=vinfo.xres-1;
if (YY>vinfo.xres) YY=vinfo.xres-1;
if (XX<0) XX=0;
if (YY<0) YY=0;

BB=left | right | middle;
tdraw();

}



}


void tdraw(){

putImage(0,0,oldIMAGE);
boxs(XX-10,YY-10,XX+10,YY+10,0,0,255);
rectangle(XX-10,YY-10,XX+10,YY+10,255,255,255);

}





















