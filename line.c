#include "directX.h"
//g++ -o line line.c
int main(int argc, char ** argv)
{
    int fbfd = startX(argv[0]);
int n;
char c[]="hello world.";
 
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);
for(n=0;n<vinfo.xres-1;n++)vline(n,0,vinfo.yres,100,100,255);
for(int x=0;x<(vinfo.xres-1)-20;x=x+20)line(x,0,x,vinfo.yres-1,0,0,255);
for(int y=0;y<(vinfo.yres-1)-20;y=y+20)line(0,y,vinfo.xres-1,y,0,0,255);
line(0,0,vinfo.xres-1,vinfo.yres-1,0,0,255);
line(0,vinfo.yres-1,vinfo.xres-1,0,0,0,255);

//refresh(); 
sleep(3);
endX(fbfd);
    return 0;
}










