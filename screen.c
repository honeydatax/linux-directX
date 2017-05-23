#include "directX.h"





int main()
{
    int fbfd = startX();
char c[]="im love marina.";
control cc;
cc.x=0;
cc.y=0;
cc.w=vinfo.xres;
cc.h=vinfo.yres;
   
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);

int *img=creatImage(vinfo.xres,vinfo.yres);
copyImage(0,0,img);
grid(cc,5,0,0,255);
usleep(5000000);
putImage(0,0,img);


refresh(); 
endX(fbfd);
    return 0;
}










