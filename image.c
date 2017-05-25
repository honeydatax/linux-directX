#include "directX.h"





int main(int argc, char ** argv)
{
    int fbfd = startX(argv);
char c[]="im love marina.";
   
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);

int *img=creatImage(vinfo.xres,vinfo.yres);

for (int xy=0;xy<vinfo.yres;xy=xy+20){
iboxs(0,xy,vinfo.xres,xy+10,img,0,0,255);
}

putImage(0,0,img);


refresh(); 
endX(fbfd);
    return 0;
}










