#include "directX.h"
//g++ -o image.c
int main(int argc, char ** argv)
{
    int fbfd = startX(argv[0]);
char c[]="hello world.";
int *img;
char cc[]="my.Marray";
   
    if (fbfd == -1) exit(1);
    if ((int)fbp == -1)exit(1);

img=loadArrayMap(cc);
int a;
if(img!=NULL){
	putImage(0,0,img);
}else{
	printf("error load image:" );
}
do{
a=fgetc(stdin); 
}while(a!=27);

endX(fbfd);
    return 0;
}
