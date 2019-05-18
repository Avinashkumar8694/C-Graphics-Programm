#include<iostream>
#include<graphics.h>
using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	line(100,100,200,200);
	line(100,150,200,250);
	line(100,200,200,300);
	
	getch();
	delay(5000);
	closegraph();
	return 0;
}
