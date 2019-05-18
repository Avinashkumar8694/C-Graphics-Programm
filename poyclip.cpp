#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

int main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
int i,j;
int xwmin=100,xwmax=200,ywmin=100,ywmax=200;
rectangle(xwmin,ywmin,xwmax,ywmax);
line(100,80,220,150);
line(220,150,150,220);
line(150,220,50,170);
line(50,170,100,80);
delay(5000);

for(i=0;i<636;i++)
{
for(j=0;j<464;j++)
{
if(i>xwmax || i<xwmin)
putpixel(i,j,BLACK);
else if(j>ywmax||j<ywmin)
putpixel(i,j,BLACK);

}
}
delay(5000);
closegraph();
return 0;


}
