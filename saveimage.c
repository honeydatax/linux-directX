#include "directX.h"
//g++ -o image.c
int main(int argc, char ** argv)
{
    int fbfd = startX(argv[0]);
int *img;
int n;
char cccc[]="my.Marray";
control cc;
control *ccc;

cc.x=0;
cc.y=0;
cc.w=vinfo.xres;
cc.h=vinfo.yres;   
  
   
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);
grid(cc,5,0,0,255);
oldIMAGE=creatImage(vinfo.xres,vinfo.yres);
copyImage(0,0,oldIMAGE);
saveArrayMap(cccc,oldIMAGE);
endX(fbfd);
    return 0;
}
