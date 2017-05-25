#include "directX.h"





int main(int argc, char ** argv)
{

label l;
l.c.x=0;
l.c.y=0;
l.c.h=16;

l.r=0;
l.g=0;
l.b=255;


    int fbfd = startX(argv[0]);
char c[50];
int i=isatty(1);
sprintf(c,".    %d     .",i);

strcpy(l.caption,c);
l.c.w=textW(l.caption);


   
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);

centerControl (&l.c,vinfo.xres,vinfo.yres);

drawLabel(l);
refresh(); 
endX(fbfd);
    return 0;
}










