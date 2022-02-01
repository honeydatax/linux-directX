#include "directX.h"
//g++ -o vline vline.c
int main(int argc,char *argv[])
{
    int n=0;
    int fbfd = startX(argv[0]);
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);
	for(n=0;n<vinfo.xres-1;n++)vline(n,0,vinfo.yres,0,0,255);
	sleep(3);
	endX(fbfd);
    return 0;
}










