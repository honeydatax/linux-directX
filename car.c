#include "directX.h"





int main(int argc, char ** argv)
{
int a;
int y=40;
label l;
strcpy(l.caption,"im love marina.  ");
int *img2;
int bb=1;
int aa=bb;

    int fbfd = startX(argv[0]);
char c[]="im love marina.";
int x=vinfo.xres/2;   
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);

img2=creatImage(vinfo.xres,vinfo.yres);


do{
ioutSide(y,img2);
iline(x,y,x,vinfo.yres,img2,255,255,255);
iline(x,y,x-vinfo.xres/3,vinfo.yres,img2,255,255,255);
iline(x,y,x+vinfo.xres/3,vinfo.yres,img2,255,255,255);
putImage(0,0,img2);
usleep(1000);
a=fgetc(stdin); 
x=x+aa;
if (x>vinfo.xres/2+vinfo.xres/3)aa=-bb;
if (x<vinfo.xres/2-vinfo.xres/3)aa=bb;
}while(a!=27); 


endX(fbfd);
    return 0;
}










