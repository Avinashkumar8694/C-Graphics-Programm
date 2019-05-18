#include<stdio.h>
#include<graphics.h>
//#include<conio.h>
//#include<dos.h>
#include<math.h>
void main()
{
	int gd=DETECT,gm;
	float x1,x2,y1,y2,dx,co,j;
	int flag=0;
	float distance,B_SPEED,F_SPEED;

	initgraph(&gd,&gm,"");
	cleardevice();
	textcolor(RED);
	printf("Enter the Speed of Bomber Plane(1 to 20):");
	scanf("%f",&B_SPEED);
	printf("Enter the Speed of Fighter Plane(1 to 20):");
	scanf("%f",&F_SPEED);
	j=120;

	x1=20.0;
	y1=400.0;
	x2=20.0;
	y2=200.0;

	while(x1<600)
	{
		cleardevice();
		sound(j);
		setfillstyle(1, RED);
		fillellipse(x1, y1, 5,5);
		outtextxy(x1+20,y1,"BOMBER");
		//circle(x1,y1,10);
		x1=x1+B_SPEED;
		dx=x1-x2;
		gotoxy(1,1);
		printf("BOMBER  X1:%2f, Y1:%f",x1,y1);
		gotoxy(1,2);
		printf("FIGHTER X2:%2f, Y2:%2f",x2,y2);
		distance= pow((x1-x2),2)+pow((y1-y2),2);
		distance=sqrt(distance);
		gotoxy(1,3);
		printf("DISTANCE BETWEEN BOTH PLANE:%f",distance);
		co=dx/distance;
		x2=x2+F_SPEED*co;
		y2=y2+F_SPEED*sqrt(1-co*co);
		//circle(x2,y2,10);
		setfillstyle(1,GREEN);
		fillellipse(x2, y2, 5,5);
		outtextxy(x2+20,y2,"FIGHTER");

		if(distance<=50)
		{

		flag=1;
		for(int i=0;i<15;i++)
		{
		sound(i*180);
		delay(50);
		}
		outtextxy(220,150,"Bomber Plane crashed");
		nosound();
		getch();
		break;
		}
		delay(500);


	}
	if(flag==0)
	{
	outtextxy(220,250," Sorry:Bomber Plane has Passed away Safely!");

	for(int i=120;i<1000;i++)
	{
	sound(i);
	delay(8);

	}
	delay(50);
	}
	nosound();
//	getch();

}

