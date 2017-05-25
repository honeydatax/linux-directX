#include "directX.h"





int main(int argc, char ** argv)
{
int a;
label l;
strcpy(l.caption,"im love marina.  ");
int y=40;
int *img;
    int fbfd = startX(argv[0]);
char c[]="im love marina.";
   
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);

img=creatImage(vinfo.xres,vinfo.yres);
copyImage(0,0,img);

do{
outSide(y);
//refresh();
usleep(50000);
a=fgetc(stdin); 
y++;
if (y>vinfo.yres-50)a=27;
}while(a!=27); 

putImage(0,0,img);
endX(fbfd);
    return 0;
}










