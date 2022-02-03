#include "directX.h"





int main(int argc, char ** argv)
{
int a;
int y=40;
int rr=10;
int xxx=rr*2;
int yyy=rr*2;
label l;
strcpy(l.caption,"hello world.  ");
int *img2;
int bb=5;
int dd=-bb;
int aa=bb;
int cc=bb;
    int fbfd = startX(argv[0]);
char c[]="hello world.";
int x=vinfo.xres/2;   
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);

img2=creatImage(vinfo.xres,vinfo.yres);

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


endX(fbfd);
    return 0;
}










