#include "directX.h"





int main(int argc, char ** argv)
{
    int fbfd = startX(argv[0]);
char c[]="im love marina.";
   
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);

int *img=creatImage(vinfo.xres,vinfo.yres);
iboxs(0,0,vinfo.xres,vinfo.yres,img,255,255,255);

icircle(vinfo.xres/2,vinfo.yres/2,vinfo.yres/9,img,0,0,255);
ifffill(vinfo.xres/2,vinfo.yres/2,img,0,0,255);

putImage(0,0,img);
sleep(5);

endX(fbfd);
    return 0;
}










