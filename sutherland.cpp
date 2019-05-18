#include<iostream>
#include<stdio.h>
#include<graphics.h>

using namespace std;

const int INSIDE=0;
const int LEFT=1;
const int RIGHT=2;
const int ABOVE=8;
const int BELOW=4;

const int xwmin=50;
const int xwmax=200;
const int ywmin=50;
const int ywmax=200;

int computecode(double x1,double y1)
{
	int code =INSIDE;
	if(x1<xwmin)
	code |=LEFT;
	else if(x1>xwmax)
	code |=RIGHT;
	if(y1<ywmin)
	code |=BELOW;
	else if(y1>ywmax)
	code |=ABOVE;
	
	return code;
}

void sclipped(double x1,double y1,double x2,double y2)
{
	int code1=computecode(x1,y1);
	int code2=computecode(x2,y2);
	
	bool accept=false;
	
	while(true)
	{
		if((code1==0)&&(code2==0))
		{
			accept=true;
			break;
		}
		else if(code1&code2)
		{
			break;
		}
		else
		{
			int codeout;
			double x,y;
			if(code1!=0)
			{
				codeout=code1;
			}
			else
			codeout=code2;
			
			if(codeout&ABOVE)
			{
				x=x1+(x2-x1)*(ywmax-y1)/(y2-y1);
				y=ywmax;
			}
			else if(codeout&BELOW)
			{
				x=x1+(x2-x1)*(ywmin-y1)/(y2-y1);
				y=ywmin;
			}
			else if(codeout&LEFT)
			{
				y=y1+(y2-y1)*(xwmin-x1)/(x2-x1);
				x=xwmin;
			}
			else if(codeout&RIGHT)
			{
				y=y1+(y2-y1)*(xwmax-x1)/(x2-x1);
				x=xwmax;
			}
			
			if(codeout==code1)
			{
				x1=x;
				y1=y;
				code1=computecode(x1,y1);
			}
			else
			{
				x2=x;
				y2=y;
				code2=computecode(x2,y2);
			}
		}
	}
	if(accept==true)
	{
		//printf("Line is accepted from %lf to %lf",x1,y1);
		line(x1,y1,x2,y2);
		delay(1000);
	}
	else
	{
		printf("Line is rejected\n");
	}
	return;
}
			
			
			
			
			
			
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	
	rectangle(xwmin,ywmin,xwmax,ywmax);
	line(20,100,100,50);
	//line(20,100,100,230);
	//line(230,100,100,230);
	//line(230,100,100,20);
	delay(1000);
	cleardevice();
	
	rectangle(xwmin,ywmin,xwmax,ywmax);
	sclipped(20,100,100,50);
	//sclipped(20,100,100,230);
	//sclipped(230,100,100,230);
	//sclipped(230,100,100,20);
	
	delay(1000);
	closegraph();
	return 0;
}
