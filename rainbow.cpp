#include<iostream>
#include<graphics.h>

using namespace std;

void draw_rainbow()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	int x=getmaxx()/2;
	int y=getmaxy()/2;
	for(int i=30;i<200;i++)
	{
		delay(100);
		setcolor(i/10);
		arc(x,y,0,180,i-10);
	}
	closegraph();
	return;
}

int main()
{
	draw_rainbow();
	return 0;
}
