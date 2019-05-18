#include<stdio.h>
#include<math.h>
#include<graphics.h>
#define pi 3.14
void rotation(int x,int y,int z)
{
  //Enter angle
  float a;
  int d;
  printf("Enter angle/n");
  scanf("%d",&a);
  a=a*(pi/180);
  printf("Enter your choice,rotation against:\n");
  printf("1.X-axis \n2.Y-axis \n3.Z-axis");
  scanf("%d",&d);
  switch(d)
  {
    case 1: x=x;
            y=y*cos(a)-z*sin(a);
            z=y*sin(a)+z*cos(a);
   case 2: y=y;
           z=z*cos(a)-x*sin(a);
           x=z*sin(a)+x*cos(a);

   case 3: z=z;
           x=x*cos(a)-y*sin(a);
           x=x*sin(a)+y*cos(a);

  }
  delay(500);
  cleardevice();
}

int main()
{
 int gd=DETECT ,gm; 
 int x,y,z;

 initgraph(&gd,&gm,NULL);
printf("Enter points to be transformed\n");
 scanf("%d %d %d",&x,&y,&z);

 bar3d(150,250,190,350,20,1);

 getch();
delay(4000);
 closegraph();
  
}
