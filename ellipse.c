#include<stdio.h>
#include<graphics.h>
#include<math.h>
int main()
{
 float a,b,x,y,d,xc,yc;
 int gd=DETECT,gm;
 printf ("enter the values of a,b of an elliplse:");
 scanf("%f%f",&a,&b);
 printf("give the center of the ellipse xc,yc:");
 scanf("%f%f",&xc,&yc);
 initgraph(&gd,&gm,NULL);
 x=0;
 y=b;
 d=b*b+(a*a*(0.25-b));
 while((a*a*(y-1/2))>(b*b*(x+1)))
 {
  if (d<0)
  {
   d=d+b*b*(2*x+3);
   x=x+1;
   //y=y-1;
  }
  else
  {
   d=d+b*b*(2*x+3)+2*((a*a)*(1-y));
   y=y-1;
   x=x+1;
  }
  putpixel(x+xc,y+yc,RED);
  putpixel(-x+xc,y+yc,RED);
  putpixel(x+xc,-y+yc,RED);
  putpixel(-x+xc,-y+yc,RED);
  delay(100);
  //getch();
  //closegraph();
 }
 //x=a;
 //y=0;
 d=(b*b*(x+0.5)*(x+0.5))+(a*a*(y-1)*(y-1))-a*a*b*b;
 while(y>0)
 {
  if (d<0)
  {
   d=d+2*b*b*(1+x)+a*a*(3-2*y);
   x=x+1;
   y=y-1;
  }
  else
  {
   d=d+a*a*(3-2*y);
   //x=x;
   y=y-1;}
   putpixel(x+xc,y+yc,RED);
   putpixel(-x+xc,y+yc,RED);
   putpixel(x+xc,-y+yc,RED);
   putpixel(-x+xc,-y+yc,RED);
    delay(100);
 }
 getch();
   closegraph();
 return 0;
}
