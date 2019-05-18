#include<bits/stdc++.h>
#include<graphics.h>


using namespace std;

/*float min(float a, float b, float c)
{
	float min;
	if(a<b)
	{
		min=a;
	}
	else
	min=b;
	if(min<c)
	return min;
	else
	return c;
}

float max(float a,float b,float c)
{
	float max;
	if(a>b)
	max=a;
	else
	max=b;
	if(max>c)
	return max;
	else
	return c;
}*/
const int xwmin=50;
const int xwmax=150;
const int ywmin=50;
const int ywmax=150;

void bars(int x1,int y1,int x2,int y2)
{
	float dx=x2-x1;
	float dy=y2-y1;
		
	float t1=0,t2=1,xx1,yy1,xx2,yy2;
	float p[]={-dx,dx,-dy,dy};
	float q[]={x1-xwmin,xwmax-x1,y1-ywmin,ywmax-y1};
	
	for(int i=0;i<4;i++)
	{
		if(p[i]<0)
		{
			t1=max(t1,q[i]/p[i]);
		}
		else
		{
			t2=min(t2,q[i]/p[i]);
		}
	}
	
	if(t1!=0)
	{
		xx1=x1+t1*dx;
		yy1=y1+t1*dy;
	}
	else
	{
		xx1=x1;
		yy1=y1;
	}
	if(t2!=1)
	{
		xx2=x1+t2*dx;
		yy2=y1+t2*dy;
	}
	else
	{
		xx2=x2;
		yy2=y2;
	}
	line(xx1,yy1,xx2,yy2);
	delay(1000);
}

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);

	rectangle(xwmin,ywmin,xwmax,ywmax);
	delay(100);
	line(20,100,100,120);
	line(100,120,180,100);
	line(180,100,100,170);
	line(100,170,20,100);
	delay(5000);
	cleardevice();
	
	/*float dx=x2-x1;
	float dy=y2-y1;
	
	float p[]={-dx,dx,-dy,dy};
	float q[]={x1-xwmin,xwmax-x1,y1-ywmin,ywmax-y1};
	
	for(int i=0;i<4;i++)
	{
		if(p[i]<0)
		{
			t1=max(t1,q[i]/p[i]);
		}
		else
		{
			t2=min(t2,q[i]/p[i]);
		}
	}
	
	if(t1!=0)
	{
		xx1=x1+t1*dx;
		yy1=y1+t1*dy;
	}
	else
	{
		xx1=x1;
		yy1=y1;
	}
	if(t2!=1)
	{
		xx2=x1+t2*dx;
		yy2=y1+t2*dy;
	}
	else
	{
		xx2=x2;
		yy2=y2;
	}*/
	rectangle(xwmin,ywmin,xwmax,ywmax);
	bars(20,100,100,120);
	bars(100,120,180,100);
	bars(180,100,100,170);
	bars(100,170,20,100);
	delay(100);
	
	delay(5000);
	closegraph();
	return 0;
}
	
		
	
	
