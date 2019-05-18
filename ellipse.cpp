#include<iostream>
#include<graphics.h>

using namespace std;

void putpixel4(int xc,int yc,int x,int y,int color)
{
	putpixel(xc+x,yc+y,color);
	putpixel(xc-x,yc+y,color);
	putpixel(xc+x,yc-y,color);
	putpixel(xc-x,yc-y,color);
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
	
	int xc=getmaxx()/2,yc=getmaxy()/2,rx=200,ry=50;
	int ry2=ry*ry;
	int rx2=rx*rx;
	int p=ry2+rx2/4-rx2*ry;
	int x=0,y=ry;
	while(2*ry2*x<2*rx2*y)
	{
		putpixel4(xc,yc,x,y,5);
		if(p<0)
		{
			x=x+1;
			p=p+ry2+2*ry2*(x);
		}
		else
		{
			x=x+1;
			y=y-1;
			p=p+ry2+2*ry2*x-2*rx2*y;
		}
	}
	p=ry2*(x+1/2)*(x+1/2)+rx2*(y-1)*(y-1)-rx2*ry2;
	while(y>=0)
	{
		putpixel4(xc,yc,x,y,5);
		if(p<0)
		{
			x=x+1;
			y=y-1;
			p=p+2*ry2*x-2*rx2*y+rx2;
		}
		else
		{
			y=y-1;
			p=p-2*rx2*y+rx2;
		}
	}
	floodfill(xc,yc,BLACK,9);
	delay(2000);
	closegraph();
	return 0;
}
