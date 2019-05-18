#include<graphics.h>

#include<iostream>
int	 main()
{
int gd = DETECT,gm;
initgraph(&gd,&gm ,NULL);
 for (int i = 420; i >= 0; i = i - 10)
{
ellipse(200+i,200,0,360,50,30);
line(250+i,200,280+i,170);
line(280+i,170,280+i,230);
line(280+i,230,250+i,200);
circle(160+i,190,3);
delay(100);
cleardevice();
}
delay(4000);
closegraph();
}
