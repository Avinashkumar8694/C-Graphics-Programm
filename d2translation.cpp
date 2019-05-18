#include<iostream>
#include<graphics.h>

using namespace std;

void setcoordinates(int t[][1],int p[][1])
{
	p[0][0]=p[0][0]+t[0][0];
	p[1][0]+=t[1][0];
	return ;
}

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	int x[]={200,150,250};
	int y[]={100,200,200};
	
	int tx=50,ty=100;
	
	int t[2][1];
	t[0][0]=50;
	t[1][0]=100;
	int p[2][1];
	line(x[0],y[0],x[1],y[1]);
	line(x[1],y[1],x[2],y[2]);
	line(x[2],y[2],x[0],y[0]);
	for(int i=0;i<3;i++)
	{
		p[0][0]=x[i];
		p[1][0]=y[i];
		 setcoordinates(t,p);
		 
		x[i]=p[0][0];
		y[i]=p[1][0];
		
	}
	delay(100);
	line(x[0],y[0],x[1],y[1]);
	line(x[1],y[1],x[2],y[2]);
	line(x[2],y[2],x[0],y[0]);
	delay(5000);
	closegraph();
	return 0;
}
