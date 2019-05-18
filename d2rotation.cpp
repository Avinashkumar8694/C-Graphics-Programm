#include<iostream>
#include<graphics.h>
#include<math.h>

using namespace std;

#define SIN(x) sin(x*3.1415926/180)
#define COS(x) cos(x*3.1415926/180)

void rotate(int points[][2],int size,int x_pivot,int y_pivot,int x)
{
	int i=0;
	while(i<size)
	{
		int x_shifted=points[i][0]-x_pivot;
		int y_shifted=points[i][1]-y_pivot;
		points[i][0]=x_pivot+(x_shifted*COS(x)-y_shifted*SIN(x));
		points[i][1]=y_pivot+(x_shifted*SIN(x)+y_shifted*COS(x));
		i++;
	}
	return ;
}

int main()
{
	int size=4;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	int points[][2]={{300,100},{350,200},{400,200},{400,150}};
	int arr[]={300,100,350,200,400,200,400,150,300,100};
	drawpoly(size+1,arr);
	rotate(points,size,0,0,30);
	delay(100);
	int arr1[]={points[0][0],points[0][1],points[1][0],points[1][1],points[2][0],points[2][1],points[3][0],points[3][1],points[0][0],points[0][1]};
	drawpoly(size+1,arr1);
	delay(5000);
	closegraph();
	return 0;
}
