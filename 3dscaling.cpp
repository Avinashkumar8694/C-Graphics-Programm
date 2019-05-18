 #include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int maxx,maxy,midx,midy;

int main()
{
int x,y,z,o,x1,x2,y1,y2;
int gd=DETECT,gm;
cout<<"Enter scaling factors";
cin>>x>>y>>z;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,NULL);
//setfillstyle(0,getmaxcolor());
maxx=getmaxx();
maxy=getmaxy();
midx=maxx/2;
midy=maxy/2;
bar3d(10,50,100,150,5,1);

//bar3d(midx+50,midy-100,midx+60,midy-90,5,1);

cout<<"After scaling";
bar3d(10+(x*50),50-(y*100),100+(x*60),150-(y*90),5*z,1);
//bar3d(50+(x*50),100-(y*100),150+(x*60),250-(y*90),5*z,1);

delay(3000);
closegraph();
return 0;
}
