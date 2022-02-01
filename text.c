#include "directX.h"
//g++ -o text text.c
int main(int argc, char ** argv)
{
    int fbfd = startX(argv[0]);
	int n;
char c[]="hello world.";
   
   
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);

for(n=0;n<vinfo.xres-1;n++)vline(n,0,vinfo.yres,100,100,255);
for (int xy=0;xy<vinfo.yres-20;xy=xy+20)gputs(xy,xy,0,0,255,c); 



sleep(5);
endX(fbfd);
    return 0;
}










