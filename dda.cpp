#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	int x1=100,y1=100,x2=200,y2=150;
	int m=(abs(y2-y1)/abs(x2-x1));
	if(m<1)
	{
		while(x1<=x2&&y1<=y2)
		{
			putpixel(x1,y1,3);
			x1=x1+1;
			y1=ceil(y1+m);
		}
	}
	else
	{
		while(x1<=x2&&y1<=y2)
		{
			putpixel(x1,y1,5);
			x1=x1+ceil(1/m);
			y1=y1+1;
		}
	}
	delay(5000);
	closegraph();
	return 0;
}
