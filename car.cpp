#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;


void boundaryFill4(int x, int y, int fill_color,int boundary_color)
{
    if(getpixel(x, y) != boundary_color &&
       getpixel(x, y) != fill_color)
    {
        putpixel(x, y, fill_color);
        boundaryFill4(x + 1, y, fill_color, boundary_color);
        boundaryFill4(x, y + 1, fill_color, boundary_color);
        boundaryFill4(x - 1, y, fill_color, boundary_color);
        boundaryFill4(x, y - 1, fill_color, boundary_color);
    }
}

void car()
{

int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
int i;
for(i=0;i<464;i=i+10)
{
setcolor(5);

                //line(0+i,300,210+i,300);
		line(50+i,300,75+i,270);
		line(75+i,270,150+i,270);
		line(150+i,270,165+i,300);
		line(165+i,300,50+i,300);
		//line(0+i,300,0+i,330);
		//line(210+i,300,210+i,330);
		//line(210+i,330,0+i,330);
		//circle(170+i,340,9);
		//circle(20+i,340,9);
		boundaryFill4(79+i,280+i,3,5);
		
delay(100);
cleardevice();
}
closegraph();



}

int main()
{
car();
return 0;

}

