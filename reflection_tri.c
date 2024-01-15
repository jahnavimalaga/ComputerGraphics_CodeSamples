#include<stdio.h>
#include<graphics.h>
#include<stdlib.h>
int tri(int points[8],int x0,int y0)
{
 int points1[8]={0};
 for(int i=0;i<8;i++)
 {
  if(i==1||3||5||7){
  points1[i]=points[i]+x0;};
  else{
  points1[i]=points[i]+x0;};
 }
 return point1;
}
int main()
{
 int x0,y0,x1,y1,x2,y2,x3,y3,p1,q1,p2,q2,p3,q3;
 int gd=DETECT,gm;
 printf("x=(0,300) , y=(0,200)\n");
 printf("first vertex of a triangle:");
 scanf("%d%d",x1,y1);
 printf("second vertex:");
 scanf ("%d%d",x2,y2);
 printf("third vertex:");
 scanf("%d%d",x3,y3);
 int points[8]={x1,y1,x2,y2,x3,y3,x1,y1};
 initgraph(&gd,&gm,NULL);
 x0=getmaxx()/2;
 y0=getmaxy()/2;
 printf("Origin:(%d,%d)\n",x0,y0);
 printf("max points:(%d,%d)",2*x0,2*y0);
 line(x0,0,x0,2*y0);
 setcolor(10);
 delay(100);
 line(0,y0,2*x0,y0);
 setcolor(10);
 delay(100);
 int a=tri(int points[8],int x0,int y0);
 drawpoly(4,a);
 setcolor(2);
 delay(100);
 getch();
 closegraph();
 return 0;
}
