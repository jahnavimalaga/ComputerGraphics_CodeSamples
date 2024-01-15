#include<stdio.h>
#include<graphics.h>

void Floodfill(int x2,int y2,int oldcolor,int newcolor);
void Bound_fill(int x2,int y2,int fill_color, int bound_color);

int main()
{
 int x=50,y=50,x1=100,y1=150,x2=75,y2=100, oldcolor, newcolor;
 int gd=DETECT,gm;
 initgraph(&gd,&gm,NULL);
 setcolor(4);
 rectangle(x,y,x1,y1);
 Floodfill(x2,y2,0,5);
 Bound_fill(x2,y2,7,4);
 delay(100);
 getch();
 closegraph();
 return 0;
}

/*---------------------------------------------------------------*/


void Bound_fill(int x2,int y2,int fill_color,int bound_color)
{
 if ((getpixel(x2,y2)!=bound_color)&&(getpixel(x2,y2)!=fill_color))
 {delay(5);
  putpixel(x2,y2,fill_color);
  Bound_fill(x2+1,y2,fill_color,bound_color);
  Bound_fill(x2-1,y2,fill_color,bound_color);
  Bound_fill(x2,y2+1,fill_color,bound_color);
  Bound_fill(x2,y2-1,fill_color,bound_color);
 }
}

void Floodfill(int x2,int y2,int oldcolor,int newcolor)
{
 
 if (getpixel(x2,y2)==oldcolor)
 {
  delay(5);
  putpixel(x2,y2,newcolor);
  Floodfill(x2+1,y2,oldcolor,newcolor);
  Floodfill(x2-1,y2,oldcolor,newcolor);
  Floodfill(x2,y2+1,oldcolor,newcolor);
  Floodfill(x2,y2-1,oldcolor,newcolor);
 }
}


