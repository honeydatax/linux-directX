#include "directX.h"





int main()
{
int a;
int y=40;
int rr=10;
int xxx=rr*2;
int yyy=rr*2;
label l;
strcpy(l.caption,"im love marina.  ");
int *img;
int *img2;
int bb=5;
int dd=-bb;
int aa=bb;
int cc=bb;
    int fbfd = startX();
char c[]="im love marina.";
int x=vinfo.xres/2;   
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);

img=creatImage(vinfo.xres,vinfo.yres);
img2=creatImage(vinfo.xres,vinfo.yres);
copyImage(0,0,img);

do{
iboxs(0,0,vinfo.xres,vinfo.yres,img2,255,255,255);
iball(xxx,yyy,rr,img2,0,0,255);
putImage(0,0,img2);
usleep(1000);
a=fgetc(stdin); 
xxx=xxx+aa;
yyy=yyy+cc;
if (xxx>vinfo.xres-rr*2)aa=dd;
if (xxx<rr*2)aa=bb;
if (yyy>vinfo.yres-rr*2)cc=dd;
if (yyy<rr*2)cc=bb;
}while(a!=27); 

putImage(0,0,img);
endX(fbfd);
    return 0;
}










