#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{
 int x,y,x1,y1,x2,y2,x3,y3,t;
 float t1;
 int gd=DETECT,gm;//points[6]={x,y,x1,y1,x,y};
 printf ("give the first vertex of the rectangle:");
 scanf ("%d%d",&x,&y);
 printf (" 2nd vertex:");
 scanf("%d%d",&x1,&y1);
 //printf (" 3rd vertex:");
 //scanf("%d%d",&x2,&y2);
 //printf ("4th vertex:");
 //scanf("%d%d",&x3,&y3);
 printf ("enter the angle t in degrees for rotation:");
 scanf ("%d",&t);
 initgraph(&gd,&gm,NULL);
 line(x,y,x1,y1);
// drawpoly(3,points);
 setcolor(5);
 t1=(M_PI/180)*t;
 x2=x*cos(t1)-y*sin(t1);
 y2=x*sin(t1)+y*cos(t1);
 x3=x1*cos(t1)-y1*sin(t1);
 y3=x1*sin(t)+y1*cos(t1);
// int points1[6]={x2,y2,x3,y3,x2,y2};
 line(x2,y2,x3,y3);
 //drawpoly(3,points1);
 setcolor(10);
 delay(100);
 getch();
 closegraph();
 return 0;
}
