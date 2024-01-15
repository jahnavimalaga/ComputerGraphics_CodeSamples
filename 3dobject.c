#include<stdio.h>
#include<graphics.h>
int translation(int,int,int,int,int,int,int,int);
int scaling(int,int,int,int,int,int,int,int);
/*void Bound_fill(int x2,int y2,int fill_color,int bound_color)
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
}*/

int main()
{
 int gd=DETECT,gm;
 int x1=50,y1=50,x2=100,y2=100,flag,h=50,tx,ty,sx,sy;
 printf("give tx,ty (translation):");
 scanf("%d%d",&tx,&ty);
 printf("give sx,sy (scaling):");
 scanf("%d%d",&sx,&sy);
 initgraph(&gd,&gm,NULL);
 setcolor(3);
 bar3d(x1,y1,x2,y2,h,flag);
// Bound_fill(105,95,1,3);
 //Floodfill(102,99,0,1);
 delay(600);
// cleardevice();
//---------------------------------
 translation(x1,y1,x2,y2,tx,ty,h,flag);
// cleardevice();
//-----------------------------
 scaling(x1,y1,x2,y2,sx,sy,h,flag);
 getch();
 closegraph();
 return 0;
}
int translation(int x1,int y1,int x2,int y2,int tx,int ty,int h,int flag)
{
 x1=x1+tx;
 x2+=tx;
 y1+=ty;
 y2+=ty;
 bar3d(x1,y1,x2,y2,h,flag);
 delay(600);
}
int scaling(int x1,int y1,int x2,int y2,int sx,int sy,int h,int flag)
{
 x1*=sx;
 y1*=sy;
 x2*=sx;
 y2*=sy;
 bar3d(x1,y1,x2,y2,h,flag);
 delay(50);
}
