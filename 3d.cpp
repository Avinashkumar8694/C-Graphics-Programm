#include<stdio.h>
#include<graphics.h>
#include<iostream>
#include<math.h>

using namespace std;

void translation(int x1,int y1,int x2,int y2,int d,int n)
{
	int tx,ty,tz;
		int gd=DETECT,gm;
	
	cout<<"Enter translation factors:\n";
	cin>>tx>>ty>>tz;
	initgraph(&gd,&gm,NULL);
	
	bar3d(x1+tx,y1+ty,x2+tx,y2+ty,d+tz,n);
	return ;
}

void scaling(int x1,int y1,int x2,int y2,int d,int n)
{
	int sx,sy,sz;
	cout<<"Enter scaling factors:\n";
	cin>>sx>>sy>>sz;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	bar3d(x1*sx,y1*sy,x2*sx,y2*sy,d*sz,n);
	return ;
}	

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	bar3d(150,100,250,200,-20,5);
	delay(1000);
	cleardevice();
	closegraph();
	
	/*translation(150,100,250,200,20,5);
	delay(1000);
	cleardevice();
	closegraph();*/
	
	/*scaling(150,100,250,200,20,5);
	delay(1000);
	cleardevice();
	closegraph();*/
	
	shear();
	delay(1000);
	cleardevice();
	
	/*rotation();
	delay(1000);
	cleardevice();
	
	reflection();
	delay(1000);
	cleardevice();
	
	closegraph();*/
	return 0;
}
