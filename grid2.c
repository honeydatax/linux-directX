#include "directX.h"
//g++ -o grid grid.c
int main(int argc, char ** argv)

{
    int fbfd = startX(argv[0]);
char c[]="hello world.";
int n;
int x;
int y;
int *oldIMAGE;
control cc;
control *ccc;
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
copyImage(x-6,y-6,oldIMAGE);
while(1){
	mouseEvent();
	if(mouseX!=x || mouseY!=y){
		putImage(x-6,y-6,oldIMAGE);
		x=mouseX;
		y=mouseY;
		copyImage(x-6,y-6,oldIMAGE);		
		ball(x,y,3,100,100,255);
		left=0;
	}
	if(getc(stdin)==27)break;
}


endX(fbfd);
    return 0;
}
