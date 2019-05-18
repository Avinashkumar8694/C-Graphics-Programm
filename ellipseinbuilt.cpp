#include<iostream>
#include<graphics.h>

using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	ellipse(100,100,0,90,100,50);
	setcolor(5);
	floodfill(100,100,15);
	delay(1000);
	closegraph();
	return 0;
}
	
