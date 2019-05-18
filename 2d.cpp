#include<iostream>
#include<graphics.h>
#include<math.h>

using namespace std;
#define pi 3.14

int main()
{
	
	int tx,ty,sx,sy,shx,shy,angle;
	cout<<"Enter value of translation factors:\n";
	cin>>tx>>ty;
	cout<<"Enter scaling factors:\n";
	cin>>sx>>sy;
	cout<<"Enter shear factors:\n";
	cin>>shx>>shy;
	cout<<"Enter angle for rotation:\n";
	cin>>angle;
	float val=pi/180;
	angle*=val;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	rectangle(100,100,200,200);
	delay(5000);
	//Translation
	
	rectangle(100+tx,100+ty,200+tx,200+ty);
	delay(5000);
	cleardevice();
	
	//Scaling
	
	rectangle(100*sx,100*sy,200*sx,200*sy);
	delay(5000);
	cleardevice();

	//Shear
	
	rectangle(50+shy*50,50,100+shy*100,100);
	delay(5000);
	cleardevice();
	//Rotation
	
	rectangle((100*cos(angle)-100*sin(angle)),(100*sin(angle)+100*cos(angle)),(200*cos(angle)-200*sin(angle)),(200*sin(angle)+200*cos(angle)));
	cleardevice();
	
	delay(5000);
	closegraph();
	return 0;
}
