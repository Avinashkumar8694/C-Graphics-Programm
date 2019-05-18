#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

void beizer(int x[4],int y[4])
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	double u;
	for(u=0;u<1.0;u+=0.0005)
	{
		double xu= pow(1-u,3)*x[0]+3*pow(1-u,2)*u*x[1]+3*pow(u,2)*(1-u)*x[2]+pow(u,3)*x[3];
		double yu= pow(1-u,3)*y[0]+3*pow(1-u,2)*u*y[1]+3*pow(u,2)*(1-u)*y[2]+pow(u,3)*y[3];
		putpixel(xu,yu,WHITE);
	}
	for(int i=0;i<4;i++)
	{
		putpixel(x[i],y[i],RED);
	}
	delay(1000);
	closegraph();
	return ;
}
int main()
{
	int x[4],y[4],i;
	cout<<"Enter the coordinates of 4 points:\n";
	for(i=0;i<4;i++)
	{
		cin>>x[i]>>y[i];
	}
	beizer(x,y);
	return 0;
}
