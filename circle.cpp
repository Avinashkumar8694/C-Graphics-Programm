#include<iostream>
#include<graphics.h>

using namespace std;

void putpixel8(int xc,int yc,int x,int y,int color)
{
	putpixel(xc+x,yc+y,color);
	putpixel(xc-x,yc+y,color);
	putpixel(xc+x,yc-y,color);
	putpixel(xc-x,yc-y,color);
	putpixel(xc+y,yc+x,color);
	putpixel(xc-y,yc+x,color);
	putpixel(xc+y,yc-x,color);
	putpixel(xc-y,yc-x,color);
	return;
}

void floodfill(int x,int y,int oldcolor,int fillcolor)
{
	int current=getpixel(x,y);
	if(current==oldcolor)
	{
		putpixel(x,y,fillcolor);
		floodfill(x,y+1,oldcolor,fillcolor);
		floodfill(x,y-1,oldcolor,fillcolor);
		floodfill(x+1,y,oldcolor,fillcolor);
		floodfill(x-1,y,oldcolor,fillcolor);
	}
	return ;
}

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	int xc=100,yc=100,r=100;
	int p=1-r;
	int x=0,y=r;
	while(x<=y)
	{
		putpixel8(xc,yc,x,y,5);
		if(p<0)
		{
			x=x+1;
			p=p+2*x+1;
		}
		else
		{
			x=x+1;
			y=y-1;
			p=p+2*x-2*y+1;
		}
	}
	floodfill(xc,yc,BLACK,9);
	delay(2000);
	closegraph();
	return 0;
}
