#include "directX.h"





int main(int argc, char ** argv)
{
    int fbfd = startX(argv[0]);
char c[]="im love marina.";
   
   
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);

//ball(vinfo.xres/2,vinfo.yres/2,vinfo.xres/12,0,0,255);
for(int x=0;x<vinfo.xres-20;x=x+20)line(x,0,x,vinfo.yres,0,0,255);
for(int y=0;y<vinfo.yres-20;y=y+20)line(0,y,vinfo.xres,y,0,0,255);
line(0,0,vinfo.xres,vinfo.yres,0,0,255);
line(0,vinfo.yres,vinfo.xres,0,0,0,255);

refresh(); 
endX(fbfd);
    return 0;
}










