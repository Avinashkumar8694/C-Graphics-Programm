#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	int i,j;
	int xwmin=100,xwmax=200,ywmin=100,ywmax=200;
	rectangle(xwmin,ywmin,xwmax,ywmax);
	
	line(150,80,220,150);
	line(220,150,150,220);
	line(150,220,50,170);
	line(50,170,150,80);
	
	delay(5000);
	//cout<<getmaxx()<<" "<<getmaxy();
	for(i=0;i<639;i++)
	{
		for(j=0;j<479;j++)
		{
			if(i>xwmax||i<xwmin)
			putpixel(i,j,BLACK);
			else if(j<ywmin||j>ywmax)
			putpixel(i,j,BLACK);
		}
	}
	
	delay(5000);
	closegraph();
	return 0;
}
