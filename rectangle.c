#include "directX.h"


void drawbut();
void tdraw();

int XX=0;
int YY=0;
int BB=0;
control c;

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
c.x=0;
c.y=0;
c.w=vinfo.xres;
c.h=vinfo.yres;

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
BB=left | right | middle;
tdraw();

}



}


void tdraw(){

boxs(c.x,c.y,c.w,c.h,255,255,255);
boxs(mouseX-2,mouseY-2,mouseX+2,mouseY+2,0,0,255);
rectangle(mouseX-4,mouseY-4,mouseX+4,mouseY+4,0,0,255);
rectangle(mouseX-8,mouseY-8,mouseX+8,mouseY+8,0,0,255);

}





















