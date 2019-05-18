#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int maxx,maxy,midx,midy;
int main()
{
int x,y,z,o,x1,x2,y1,y2;
int gd=DETECT,gm;
cout<<"Enter translation factor";
cin>>x>>y;
initgraph(&gd,&gm,NULL);
bar3d(150,250,190,350,40,1);
delay(500);
cout<<"After translation:";
bar3d(150+x,250-(y),190+x,350-(y),40,1);
delay(4000);
closegraph();
return 0;
}
