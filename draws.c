#include "directX.h"





int main(int argc, char ** argv)
{
    int fbfd = startX(argv[0]);
char c[]="im love marina.";
   
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);

int *img=creatImage(vinfo.xres,vinfo.yres);
int *icon=creatImage(33,33);
iboxs(0,0,vinfo.xres,vinfo.yres,img,255,255,255);

icircle(32,32,8,img,0,0,255);
ifffill(32,32,img,0,0,255);
IcopyImage(0,0,icon,img);

for (int ii=0;ii<vinfo.yres;ii=ii+icon[1])for (int i=0;i<vinfo.xres;i=i+icon[0])IputImage(i,ii,img,icon);
putImage(0,0,img);
sleep(5);

endX(fbfd);
    return 0;
}










