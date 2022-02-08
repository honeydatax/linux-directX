#include "directX.h"
//g++ -o grid grid.c
label XX;
label YY;
label BB;


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

int main(int argc, char ** argv)
{
    int fbfd = startX(argv[0]);
char c[]="hello world.";
int n;
int x;
int y;
int i=0;
int l=0;
char b=0;
int *oldIMAGE;
control cc;
control *ccc;
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


oldIMAGE=creatImage(12,12);
copyImage(0,0,oldIMAGE);

cc.x=0;
cc.y=0;
cc.w=vinfo.xres;
cc.h=vinfo.yres;   
   
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);


grid(cc,5,0,0,255);
mouseEvent();
x=mouseX;
y=mouseY;
left=0;
ddd();
copyImage(x-6,y-6,oldIMAGE);
while(1){
	mouseEvent();
	if(mouseX!=x || mouseY!=y){
		putImage(x-6,y-6,oldIMAGE);
		x=mouseX;
		y=mouseY;
		ddd();
		copyImage(x-6,y-6,oldIMAGE);		
		ball(x,y,3,100,100,255);
		left=0;
	}
	if(getc(stdin)==27)break;
}

endX(fbfd);
    return 0;
}
