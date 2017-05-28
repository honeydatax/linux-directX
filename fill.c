#include "directX.h"





int main(int argc, char ** argv)
{
    int fbfd = startX(argv[0]);
char c[]="im love marina.";
int img[(vinfo.xres+2)*(vinfo.yres+2)];


   
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);

boxs(vinfo.xres/4-vinfo.yres/4,vinfo.yres/4-vinfo.yres/4,vinfo.xres/4+vinfo.yres/4,vinfo.yres/4+vinfo.yres/4,255,255,255);
circle(vinfo.xres/4,vinfo.yres/4,vinfo.yres/9,0,0,255);
fffill(vinfo.xres/4,vinfo.yres/4,0,0,255);

sleep(5);
endX(fbfd);
    return 0;
}










