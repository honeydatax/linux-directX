#include "directX.h"
//g++ -o vline vline.c
int main(int argc,char *argv[])
{
    int fbfd = startX(argv[0]);
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);
	vline(vinfo.xres/2,0,vinfo.yres,0,0,255);
	sleep(3);
	endX(fbfd);
    return 0;
}










