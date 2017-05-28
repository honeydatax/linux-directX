#include "directX.h"





int main(int argc, char ** argv)
{
    int fbfd = startX(argv[0]);
char c[]="im love marina.";
int img[(vinfo.xres+2)*(vinfo.yres+2)];


   
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);

for (int rr=0;rr<100;rr=rr+10)circle(vinfo.xres/2,vinfo.yres/2,rr,0,0,255);

sleep(5);
endX(fbfd);
    return 0;
}










