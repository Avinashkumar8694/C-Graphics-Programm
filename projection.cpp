#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<iostream>
using namespace std;
void draw3d(int s,int x[20],int y[20],int d);
int main()
{
	int gd=DETECT,gm;
	int x[20],y[20],i,s,d;
	cout<<"enter the no. of sides:\n";
	cin>>s;
	for(i=0;i<s;i++)
	{
		cin>>x[i]>>y[i];
	}
	cout<<"Enter depth:\n";
	cin>>d;
	
	initgraph(&gd,&gm,NULL);
	
	draw3d(s,x,y,d);
	
	delay(10000);
	
	setcolor(14);
	
	for(i=0;i<s-1;i++)
	{
		line(x[i]+200,y[i],x[i+1]+200,y[i+1]);
	}
	
	line(x[i]+200,y[i],x[0]+200,y[0]);
	delay(10000);
	
	for(i=0;i<s-1;i++)
	{
		line(x[i],300,x[i+1],300);
		delay(1000);
		line(x[i],300+d*2,x[i+1],300+d*2);
		delay(1000);
		line(x[i],300,x[i],300+d*2);
		delay(1000);
		line(x[i+1],300,x[i+1],300+d*2);
		delay(1000);
	}
	delay(100000);
	
	closegraph();
	return 0;
}

void draw3d(int s,int x[20],int y[20],int d)
{
	int i,j,k=0;
	for(j=0;j<2;j++)
	{
		for(i=0;i<s-1;i++)
		{
			line(x[i]+k,y[i]-k,x[i+1]+k,y[i+1]-k);
			delay(1000);
		}
		line(x[i]+k,y[i]-k,x[0]+k,y[0]-k);
		delay(100);
		k=d;
	}
	for(i=0;i<s;i++)
	{
		line(x[i],y[i],x[i]+d,y[i]-d);
		delay(100);
	}
	return ;
}
		
