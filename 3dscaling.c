#include <stdio.h>
#include <graphics.h>
#include <math.h>
void scale();
//these are left,top,right,bottom parameters for bar3d function
int maxx,maxy,midx,midy;
int main()
{
            int ch;
                        int x,y,z,o,x1,x2,y1,y2;
            int gd=DETECT,gm;
            initgraph(&gd,&gm,NULL);

            midx=200;
            midy=400;
                        bar3d(midx+25,midy-50,midx+50,midy-30,20,1);


            x=3;
            y=4;
            z=3;

               bar3d(midx+(x*25),midy-(y*50),midx+(x*50),midy-(y*30),20*z,1);
            delay(9000);
            closegraph();
return 0;
}

