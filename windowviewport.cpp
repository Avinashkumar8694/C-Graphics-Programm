#include<stdio.h>
//#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
int main()
{
    float xwmin,xwmax,ywmax,ywmin;
    float xvmin,xvmax,yvmax,yvmin;
    float x[10],y[10],yv,xv,sx,sy;
    int gd=DETECT,gm,i;
    
    printf("\n enter window port coordinates:\n(xwmin,ywmin,xwmax,ywmax): ");
    scanf("%f%f%f%f",&xwmin,&ywmin,&xwmax,&ywmax);
    printf("\n enter view port coordinates:\n(xvmin,yvmin,xvmax,yvmax): ");
    scanf("%f%f%f%f",&xvmin,&yvmin,&xvmax,&yvmax);
    printf("\n enter vertices for triangle: ");
    for(i=0;i < 3;i++)
    {
    printf("\n enter(x%d,y%d):",i,i);
    scanf("%f%f",&x[i],&y[i]);
    }
    sx=((xvmax-xvmin)/(xwmax-xwmin));
    sy=((yvmax-yvmin)/(ywmax-xwmin));

    initgraph(&gd,&gm,NULL);
    //outtextxy(80,30,"window port");
    rectangle(xwmin,ywmin,xwmax,ywmax);
    for(i=0;i <2;i++)
    {
    line(x[i],y[i],x[i+1],y[i+1]);
    }
    line(x[2],y[2],x[0],y[0]);
    delay(500);
    getch();
    cleardevice();
    for(i=0;i <3;i++)
    {
    x[i]=xvmin+((x[i]-xwmin)*sx);
    y[i]=yvmin+((y[i]-ywmin)*sy);
    }
    //outtextxy(150,10,"view port");
    rectangle(xvmin,yvmin,xvmax,yvmax);
    for(i=0;i <2;i++)
    {
    line(x[i],y[i],x[i+1],y[i+1]);
    }
    line(x[2],y[2],x[0],y[0]);
    delay(500);
    getch();
    closegraph();
    return 0;
}
