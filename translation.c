#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{
 int x,y,x1,y1,x2,y2,x3,y3,tx,ty;
 int gd=DETECT,gm;
 printf ("give the 1st diagonal vertex of a rectangle:");
 scanf ("%d%d",&x,&y);
 printf ("give the 2nd diagonal vertex of a rectangle:");
 scanf("%d%d",&x1,&y1);
 printf ("enter the values of tx,ty for translation:");
 scanf ("%d%d",&tx,&ty);
 initgraph(&gd,&gm,NULL);
 rectangle(x,y,x1,y1);
 setcolor(5);
 x2=x+tx;
 y2=y+ty;
 x3=x1+tx;
 y3=y1+ty;
 rectangle(x2,y2,x3,y3);
 setcolor(10);
 delay(100);
 getch();
 closegraph();
 return 0;
}
