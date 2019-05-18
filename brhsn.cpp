#include<iostream>
#include<graphics.h>

using namespace  std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	int x1=200,y1=400,x2=100,y2=300;
	int dx=abs(x2-x1);
	int dy=abs(y2-y1);
	int m=dy/dx;
	int t=dx;
	if(m<1)
	{
		int p=2*dy-dx;
		while(t--)
		{
			putpixel(x1,y1,5);
			x1=x1+1;
			if(p<0)
			{
				p=p+2*dy;
			}
			else
			{
				y1=y1+1;
				p=p+2*dy-dx;
			}
		}
		
	}
	else 
	{	if(m>1)
		{
			int p=2*dx-dy;
			int t=dy;
			while(t--)
			{
				putpixel(x1,y1,9);
				y1=y1-1;
				if(p<0)
				{
					x1=x1+1;
					p=p+2*dx-dy;
				}
				else
				{
					p=p+2*dx;
				}
			}
		}
		else
		{
			int t=dy;
			while(t--)
			{
				putpixel(x1,y1,13);
				x1+=1;
				y1+=1;
			}
		}

	}
	delay(5000);
	closegraph();
	return 0;
}	
	
	
