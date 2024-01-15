#include<stdio.h>
#include<graphics.h>
#include<math.h>
void three_d(int,int,int,int,int,int,int,int);
//void translation(float,float,float,float,float,float,float,float,int,int);
void scaling(float,float,float,float,float,float,float,float,int,int);
int main()
{ 
  int gd=DETECT,gm;
  int x1=50,x2=150,y1=50,y2=150,x3,y3,x4,y4,tx,ty,sx,sy;
  int b;
  printf("enter the breadth:");
  scanf("%d",&b);
  printf("give tx,ty (translation):");
  scanf("%d%d",&tx,&ty);
  printf("give sx,sy (scaling):");
  scanf("%d%d",&sx,&sy);

  initgraph(&gd,&gm,NULL);
  x4=x1+(b*cos(M_PI/6));
  y4=y1-(b*sin(M_PI/6));
  x3=x2+(b*cos(M_PI/6));
  y3=y2-(b*sin(M_PI/6)); 
  setcolor(4);
  
  three_d(x1,x2,x3,x4,y1,y2,y3,y4);
   x1=x1+tx;
 x2=x2+tx;
 y1=y1+ty;
 y2=y2+ty;
 x3=x3+tx;
 y3=y3+ty;
 x4=x4+tx;
 y4=y4+ty;
 printf("x1:%f",x1);
setcolor(6);
 three_d(x1+100,x2+100,x3+100,x4+100,y1+60,y2+60,y3+60,y4+60);
setcolor(2);
three_d(x1,x2,x3,x4,y1,y2,y3,y4);
  
  //translation(x1,x2,x3,x4,y1,y2,y3,y4,tx,ty);
  
 //printf("x1:%f",x1);
  //three_d(x1,x2,x3,x4,y1,y2,y3,y4);
  //scaling(x1,x2,x3,x4,y1,y2,y3,y4,sx,sy);
  delay(200);
  getch();
  closegraph();
  return 0;
}
void three_d(int x1,int x2,int x3,int x4,int y1,int y2,int y3,int y4)
{
  line(x1,y1,x2,y1);
  line(x2,y1,x2,y2);
  line(x2,y2,x1,y2);
  line(x1,y2,x1,y1);
  line(x3,y3,x3,y4);
  line(x3,y4,x4,y4);
  line(x4,y4,x4,y3);
  line(x4,y3,x3,y3);
  line(x2,y2,x3,y3);
  line(x2,y1,x3,y4);
  line(x1,y1,x4,y4);
  line(x1,y2,x4,y3);
  delay(100);
  printf("hi");
}


/*void translation(float x1,float x2,float x3,float x4,float y1,float y2,float y3,float y4,int tx,int ty)
{
 x1=x1+tx;
 x2=x2+tx;
 y1+=ty;
 y2+=ty;
 x3+=tx;
 y3+=ty;
 x4+=tx;
 y4+=ty;
 printf("hi");
 three_d(x1,x2,x3,x4,y1,y2,y3,y4);

}*/

