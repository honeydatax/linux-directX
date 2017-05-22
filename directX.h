#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <linux/fb.h>
#include <sys/mman.h>
#include <sys/ioctl.h>




int startX();
void endX(int fbfd);
void ppixel(int x, int y,char r,char g,char b);
void hline(int x, int y,int x2,char r,char g,char b);
void boxs(int x,int y,int x2,int y2,char r,char g,char b);


    struct fb_var_screeninfo vinfo;
    struct fb_fix_screeninfo finfo;
    long int screensize = 0;
    char *fbp = 0;
    long int location = 0;



int startX(){
int fbfd = open("/dev/fb0", O_RDWR);
ioctl(fbfd, FBIOGET_FSCREENINFO, &finfo);
ioctl(fbfd, FBIOGET_VSCREENINFO, &vinfo);
screensize = vinfo.xres * vinfo.yres * vinfo.bits_per_pixel / 8;
fbp = (char *)mmap(0, screensize, PROT_READ | PROT_WRITE, MAP_SHARED, fbfd, 0);
}

void endX(int fbfd){
    close(fbfd);
}


void refresh(){
   munmap(fbp, screensize);
}

void ppixel(int x, int y,char r,char g,char b){
if (x>0 && y>0 && x<vinfo.xres && y<vinfo.yres){
           int location = (x+vinfo.xoffset) * (vinfo.bits_per_pixel/8) +
                       (y+vinfo.yoffset) * finfo.line_length;

            if (vinfo.bits_per_pixel == 32) {
                *(fbp + location) = b;        
                *(fbp + location + 1) = g;  
                *(fbp + location + 2) = r; 
                *(fbp + location + 3) = 0;      

            } else  { 
                unsigned short int t = r<<11 | g << 5 | b;
                *((unsigned short int*)(fbp + location)) = t;
}
}
}


void hline(int x, int y,int x2,char r,char g,char b){
for (int xx=x;xx<x2+1;xx++)ppixel(xx,y,r,g,b);
}


void vline(int x,int y,int y2,char r,char g,char b){
int f;
int yy1=y;
int yy2=y2;
int yy3=y;
if(yy2<yy1){
yy1=yy2;
yy2=yy3;
}
for(f=yy1;f<yy2;f++){
ppixel(x,f,r,g,b);
}

} 


void boxs(int x,int y,int x2,int y2,char r,char g,char b){
int i=0;
for (i=y;i<y2;i++)hline(x,i,x2,r,g,b);
}




















