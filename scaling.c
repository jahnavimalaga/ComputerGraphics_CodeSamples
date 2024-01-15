#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{
 int x,y,x1,y1,x2,y2,x3,y3,sx,sy;
 int gd=DETECT,gm;
 printf ("give the 1st diagonal vertex of a rectangle:");
 scanf ("%d%d",&x,&y);
 printf ("give the 2nd diagonal vertex of a rectangle:");
 scanf("%d%d",&x1,&y1);
 printf ("enter the values of sx,sy for scaling:");
 scanf ("%d%d",&sx,&sy);
 initgraph(&gd,&gm,NULL);
 rectangle(x,y,x1,y1);
 setcolor(5);
 x2=x*sx;
 y2=y*sy;
 x3=x1*sx;
 y3=y1*sy;
 rectangle(x2,y2,x3,y3);
 setcolor(10);
 delay(100);
 getch();
 closegraph();
 return 0;
}
