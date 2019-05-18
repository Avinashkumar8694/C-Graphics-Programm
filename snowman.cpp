#include<iostream>
#include<graphics.h>

using namespace std;

/*void floodfill(int x,int y,int oldcolor,int fillcolor)
{
	int current=getpixel(x,y);
	if(current!=oldcolor&&current!=fillcolor)
	{
		putpixel(x,y,fillcolor);
	}
	floodfill(x,y+1,oldcolor,fillcolor);
	floodfill(x,y-1,oldcolor,fillcolor);
	floodfill(x+1,y,oldcolor,fillcolor);
	floodfill(x-1,y,oldcolor,fillcolor);
	return;
}
*/
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	int h=71;
	int k=getmaxy()/2;
	for(int i=0;i<560;i+=10)
	{
	        setcolor(15);
		circle(i+h,k-76,25);
		circle(i+h,k,50);
		circle(i+h,k+121,70);
		
		setcolor(15);
		floodfill(i+h,k-75,15);
		setcolor(15);
		floodfill(i+h,k,15);
		setcolor(15);
		floodfill(i+h,k+120,15);
		delay(100);
		cleardevice();
		/*setcolor(BLACK);
		circle(i+h,k-76,25);
		setcolor(BLACK);
		circle(i+h,k,50);
		setcolor(BLACK);
		circle(i+h,k+121,70);
		
		setcolor(BLACK);
		//floodfill(i+h,k-75,15);
		setcolor(BLACK);
		//floodfill(i+h,k,15);
		setcolor(BLACK);
		//floodfill(i+h,k+120,15);*/
	}
	delay(5000);
	
	closegraph();
	return 0;
}
