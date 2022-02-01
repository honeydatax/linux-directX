#include "directX.h"
//g++ -o grid grid.c
int main(int argc, char ** argv)

{
    int fbfd = startX(argv[0]);
char c[]="hello world.";
int n;
control cc;
control *ccc;

cc.x=0;
cc.y=0;
cc.w=vinfo.xres;
cc.h=vinfo.yres;   
   
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);

for(n=0;n<vinfo.xres-1;n++)vline(n,0,vinfo.yres,100,100,255);
grid(cc,5,0,0,255);
sleep(5);


endX(fbfd);
    return 0;
}










