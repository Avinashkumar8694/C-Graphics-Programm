#include "stdio.h" 
#include "stdlib.h"
#include"graphics.h"
void draw3d(int s,int x[20],int y[20],int d);
int  main()
{
	int gd=DETECT,gm;
	int x[20],y[20],i,s,d;
       printf("Enter the No of sides : ");
	scanf("%d",&s);
	for(i=0;i<s;i++)
	{
		printf("(x%d,y%d) :",i,i);
		scanf("%d%d",&x[i],&y[i]);
	}
	printf("Depth :");
	scanf("%d",&d);
	initgraph(&gd,&gm,NULL);
	
	draw3d(s,x,y,d);
delay(10000);
	//getch();
	setcolor(14);
	for(i=0;i<s-1;i++)
	{
		line(x[i]+200,y[i],x[i+1]+200,y[i+1]);
	}
	line(x[i]+200,y[i],x[0]+200,y[0]);
	delay(10000);
	//getc+h();//top view
	for(i=0;i<s-1;i++)
	{
		line(x[i],300,x[i+1],300);
		line(x[i],300+d*2,x[i+1],300+d*2);
		line(x[i],300,x[i],300+d*2);
		line(x[i+1],300,x[i+1],300+d*2);
	}
	delay(10000);
	//getch();//side view
	for(i=0;i<s-1;i++)
	{
		line(10,y[i],10,y[i+1]);
		line(10+d*2,y[i],10+d*2,y[i+1]);
		line(10,y[i],10+d*2,y[i]);
		line(10,y[i+1],10+d*2,y[i+1]);
	}
  delay(10000);
	//getch();
return 0;
	closegraph();
}
void draw3d(int s,int x[20],int y[20],int d)
{
	int i,j,k=0;
	for(j=0;j< 2;j++)
	{
		for(i=0;i<s-1;i++)
			line(x[i]+k,y[i]-k,x[i+1]+k,y[i+1]-k);
		line(x[i]+k,y[i]-k,x[0]+k,y[0]-k);
		k=d;
	}
	for(i=0;i<s;i++)
		line(x[i],y[i],x[i]+d,y[i]-d);
}
