#include "directX.h"





int main()
{
int a;
int y=40;
label l;
strcpy(l.caption,"im love marina.  ");
int *img;
int *img2;
int bb=1;
int aa=bb;

    int fbfd = startX();
char c[]="im love marina.";
int x=vinfo.xres/2;   
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);

img=creatImage(vinfo.xres,vinfo.yres);
img2=creatImage(vinfo.xres,vinfo.yres);
copyImage(0,0,img);

do{
iboxs(0,0,vinfo.xres,y,img2,0,255,255);
iboxs(0,y,vinfo.xres,vinfo.yres,img2,200,0,0);
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

putImage(0,0,img);
endX(fbfd);
    return 0;
}










