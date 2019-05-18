#include<iostream>
#include<graphics.h>
using namespace std;

int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	//make window
	line(0,0,200,0);
	line(200,0,200,200);
	line(200,200,0,200);
	line(0,200,0,0);



	double face1[4][3]={{25,25,25},{100,25,25},{100,100,25},{25,100,25}};
	double face2[4][3]={{75,75,100},{150,75,100},{150,150,100},{75,150,100}};
	line(face1[0][0],face1[0][1],face1[1][0],face1[1][1]);
	line(face1[1][0],face1[1][1],face1[2][0],face1[2][1]);
	line(face1[2][0],face1[2][1],face1[3][0],face1[3][1]);
	line(face1[3][0],face1[3][1],face1[0][0],face1[0][1]);
	
	line(face2[0][0],face2[0][1],face2[1][0],face2[1][1]);
	line(face2[1][0],face2[1][1],face2[2][0],face2[2][1]);
	line(face2[2][0],face2[2][1],face2[3][0],face2[3][1]);
	line(face2[3][0],face2[3][1],face2[0][0],face2[0][1]);

	double depthBuffer[201][201]={0},colorBuffer[201][201]={0};
	for(int i=face1[0][0]+1;i<face1[1][0];i++)
	{
		for(int j=face1[1][1]+1;j<face1[2][1];j++)
		{
			if(depthBuffer[i][j]<25)
			{
				depthBuffer[i][j]=face1[i][2];
				colorBuffer[i][j]=3;
				cout<<"here"<<endl;
			}
			cout<<depthBuffer[i][j]<<" "<<colorBuffer[i][j]<<endl;

		}
	}
	for(int i=face2[0][0]+1;i<face2[1][0];i++)
	{
		for(int j=face2[1][1]+1;j<face2[2][1];j++)
		{
			if(depthBuffer[i][j]<100)
			{
				depthBuffer[i][j]=face2[i][2];
				colorBuffer[i][j]=5;
			}
			cout<<depthBuffer[i][j]<<" "<<colorBuffer[i][j]<<endl;

		}
	}
	/*for(int i=0;i<=200;i++)
	{
		for(int j=0;j<=200;j++)
		{
			cout<<depthBuffer[i][j]<<" "<<colorBuffer[i][j]<<endl;
		}
	}*/
	delay(1000);
	//cleardevice();
	for(int i=0;i<=200;i++)
	{
		for(int j=0;j<=200;j++)
		{
			putpixel(i,j,colorBuffer[i][j]);
		}
	}

	line(0,0,200,0);
	line(200,0,200,200);
	line(200,200,0,200);
	line(0,200,0,0);

	line(face1[0][0],face1[0][1],face1[1][0],face1[1][1]);
	line(face1[1][0],face1[1][1],face1[2][0],face1[2][1]);
	line(face1[2][0],face1[2][1],face1[3][0],face1[3][1]);
	line(face1[3][0],face1[3][1],face1[0][0],face1[0][1]);
	
	line(face2[0][0],face2[0][1],face2[1][0],face2[1][1]);
	line(face2[1][0],face2[1][1],face2[2][0],face2[2][1]);
	line(face2[2][0],face2[2][1],face2[3][0],face2[3][1]);
	line(face2[3][0],face2[3][1],face2[0][0],face2[0][1]);
	delay(1000);
	return 0;
}