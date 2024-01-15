#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{
 int x,y,x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,shx,shy;
 int gd=DETECT,gm;
 printf ("give the 1st diagonal vertex of a rectangle:");
 scanf ("%d%d",&x,&y);
 printf ("give the 2nd diagonal vertex of a rectangle:");
 scanf("%d%d",&x1,&y1);
 printf ("enter the values of shx,shy for scaling:");
 scanf ("%d%d",&shx,&shy);
 initgraph(&gd,&gm,NULL);
 rectangle(x,y,x1,y1);
 setcolor(5);
 //shear along x direction
 x2=x+y*shx;
 y2=y;
 x3=x1+y1*shx;
 y3=y1;
 rectangle(x2,y2,x3,y3);
 setcolor(RED);
//shear along y direction
 x2=x;
 y2=y+shy*x;
 x3=x1;
 y3=y1+shy*x1;
 rectangle(x2,y2,x3,y3); 
 setcolor(BLUE);
delay(100); 
 getch();
 closegraph();
 return 0;
}
