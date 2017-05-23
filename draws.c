#include "directX.h"





int main()
{
    int fbfd = startX();
char c[]="im love marina.";
int img[(vinfo.xres+2)*(vinfo.yres+2)];


   
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);

for (int rr=0;rr<100;rr=rr+10)circle(vinfo.xres/2,vinfo.yres/2,rr,0,0,255);

refresh(); 
endX(fbfd);
    return 0;
}










