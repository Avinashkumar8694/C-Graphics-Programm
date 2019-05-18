#include<iostream>
#include<graphics.h>

using namespace std;

int main()
{
	int gd=DETECT,gm;
	
	int x[20],y[20],s,d,i,j,k=0;
	cout<<"Enter the no.of sides:\n";
	cin>>s;
	
	for(i=0;i<s;i++)
	{
		cin>>x[i]>>y[i];
	}
	
	cout<<"Enter depth:\n";
	cin>>d;
	initgraph(&gd,&gm,NULL);
	for(j=0;j<2;j++)
	{
		for(i=0;i<s-1;i++)
		{
			line(x[i]+k,y[i]-k,x[i+1]+k,y[i+1]-k);
			delay(500);
		}
		line(x[i]+k,y[i]-k,x[0]+k,y[0]-k);
		delay(500);
		k=d;
	}
	
	for(i=0;i<s;i++)
	{
		line(x[i],y[i],x[i]+d,y[i]-d);
	}
	delay(5000);
	closegraph();
	return 0;
}
