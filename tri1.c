#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>

int main()
{
 int x0,y0,x1=100,y1=100,x2=50,y2=50,x3=150,y3=100;
 int gd=DETECT,gm;
 
 initgraph(&gd,&gm,NULL);
 x0=getmaxx()/2;
 y0=getmaxy()/2;
 int points[8]={x1+x0,y1,x2+x0,y2,x3+x0,y3,x1+x0,y1};
 int points1[8]={x1+x0,y1+2*(y0-y1),x2+x0,y2+2*(y0-y2),x3+x0,y3+2*(y0-y3),x1+x0,y1+2*(y0-y1)};
 printf("Origin:(%d,%d)\n",x0,y0);
 printf("max points:(%d,%d)",2*x0,2*y0);
 setcolor(5);
 line(x0,0,x0,2*y0);
 delay(100);

 setcolor(5);
 line(0,y0,2*x0,y0);
 delay(100);

 setcolor(4);
 drawpoly(4,points);
 delay(100);

 setcolor(4);
 drawpoly(4,points1);
 fillpoly(4,points1);
 getch();
 closegraph();
 return 0;
}



