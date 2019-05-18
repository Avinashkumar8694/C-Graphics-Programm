#include<iostream>
#include<graphics.h>

using namespace std;

void setcoordinates(int p[][1],int s[][2])
{
	int p1[2][1]={0};
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<1;j++)
		{
			for(int k=0;k<2;k++)
			{
				p1[i][j]+=s[i][k]*p[k][j];
			}
		}
	}
	p[0][0]=p1[0][0];
	p[1][0]=p1[1][0];
	return ;
}

int main()
{
	int x[]={150,100,200};
	int y[]={100,200,200};
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	int sx=2,sy=2;
	int s[2][2];
	s[0][0]=sx;
	s[0][1]=0;
	s[1][0]=0;
	s[1][1]=sy;
	int p[2][1];
	line(x[0],y[0],x[1],y[1]);
	line(x[1],y[1],x[2],y[2]);
	line(x[2],y[2],x[0],y[0]);
	for(int i=0;i<3;i++)
	{
		p[0][0]=x[i];
		p[1][0]=y[i];
		 
		setcoordinates(p,s);
		
		x[i]=p[0][0];
		y[i]=p[1][0];
	}
	delay(100);
	
	line(x[0],y[0],x[1],y[1]);
	line(x[1],y[1],x[2],y[2]);
	line(x[2],y[2],x[0],y[0]);
	delay(1000);
	closegraph();
	return 0;
}
