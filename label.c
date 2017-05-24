#include "directX.h"





int main()
{

label l;
strcpy(l.caption,"im love marina.  ");
l.c.x=0;
l.c.y=0;
l.c.h=16;
l.c.w=textW(l.caption);
l.r=0;
l.g=0;
l.b=255;


    int fbfd = startX();
char c[]="im love marina.";
int img[(vinfo.xres+2)*(vinfo.yres+2)];


   
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);

centerControl (&l.c,vinfo.xres,vinfo.yres);

drawLabel(l);
refresh(); 
endX(fbfd);
    return 0;
}










