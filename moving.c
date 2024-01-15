#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>

int main()
{
 int x0,x1=100,y1=100,x2=50,y2=50,x3=150,y3=100;
 int gd=DETECT,gm;
 
 initgraph(&gd,&gm,NULL);
 x0=getmaxx();
 int points[8]={x1,y1,x2,y2,x3,y3,x1,y1};
 //printf("max points:(%d,%d)",2*x0,2*y0);
 setcolor(4);
 drawpoly(4,points);
 //delay(100);
 while(x3<x0)
 {
  cleardevice();
  x1=x1+10;x2=x2+10;x3=x3+10; 
  int points[8]={x1,y1,x2,y2,x3,y3,x1,y1};
  drawpoly(4,points);
  delay(50);
  
 }
 getch();
 closegraph();

}
