#include<iostream>
#include<graphics.h>

using namespace std;

void drawcar()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	for(int i=0;i<=420;i+=10)
	{
		setcolor(5);
		line(0+i,300,210+i,300);
		line(50+i,300,75+i,270);
		line(75+i,270,150+i,270);
		line(150+i,270,165+i,300);
		line(0+i,300,0+i,330);
		line(210+i,300,210+i,330);
		circle(65+i,330,15);
		circle(65+i,330,2);
		circle(145+i,330,15);
		circle(145+i,330,2);
		line(0+i,330,50+i,330);
		line(80+i,330,130+i,330);
		line(160+i,330,210+i,330);
		setcolor(RED);
		floodfill(100+i,280,5);
		setcolor(CYAN);
		floodfill(100+i,310,5);
		setcolor(14);
		floodfill(65+i,330,5);
		floodfill(145+i,330,5);
		delay(100);
		cleardevice();
		/*setcolor(BLACK);
		
		line(0+i,300,210+i,300);
		line(50+i,300,75+i,270);
		line(75+i,270,150+i,270);
		line(150+i,270,165+i,300);
		line(0+i,300,0+i,330);
		line(210+i,300,210+i,330);
		circle(65+i,330,15);
		circle(65+i,330,2);
		circle(145+i,330,15);
		circle(145+i,330,2);
		line(0+i,330,50+i,330);
		line(80+i,330,130+i,330);
		line(160+i,330,210+i,330);*/
	}
	closegraph();
	return;
}

int main()
{
	drawcar();
	return 0;
}
