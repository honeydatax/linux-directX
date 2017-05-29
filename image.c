#include "directX.h"





int main(int argc, char ** argv)
{
    int fbfd = startX(argv[0]);
char c[]="im love marina.";
   
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);

//initstate(random(),0,33L);
int *icon=creatImage(33,33);
iboxs(0,0,icon[0],icon[1],icon,0,0,0);
boxs(0,0,vinfo.xres,vinfo.yres,255,255,255);
int m=0;
int n=0;
for (int t=0;t<11;t++){
m=(int)random()/65000000L;
n=(int)random()/65000000L;
Ipixel(m,n,icon,64,64,255);

}

int a;
do{
m=(int)random()/1000000L;
n=(int)random()/5000000L;
TputImage(m,n,icon,0,0,0);
a=fgetc(stdin); 
}while(a!=27);

endX(fbfd);
    return 0;
}










