#include<stdio.h>
#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>>
using namespace std;


int x[10]={220,440,660,880,1100,220,440,660,880,1100};
int y[10]={200,200,200,200,200,400,400,400,400,400};
int colours[10]={15,14,4,12,6,2,10,1,9,5};
char numberc;
int number;
int main()
{
		void drawCircle(int digit,int c);
		int i,count[10]={0},n;
		cout<<"Uptill how many digits of pi:";
		cin>>n;
       initwindow(1320, 600, "Pi Digit's 'Circles");
       settextstyle(2, HORIZ_DIR, 9);
       outtextxy(500,30,"THE DIGITS OF PI");
       settextstyle(3, HORIZ_DIR, 1);
       outtextxy(x[0]-5,y[0]-9,"0");
       outtextxy(x[1]-5,y[1]-9,"1");
       outtextxy(x[2]-5,y[2]-9,"2");
       outtextxy(x[3]-5,y[3]-9,"3");
       outtextxy(x[4]-5,y[4]-9,"4");
       outtextxy(x[5]-5,y[5]-9,"5");
       outtextxy(x[6]-5,y[6]-9,"6");
       outtextxy(x[7]-5,y[7]-9,"7");
       outtextxy(x[8]-5,y[8]-9,"8");
       outtextxy(x[9]-5,y[9]-9,"9");
       
       ifstream readFromFile;
       readFromFile.open("pi.txt");
       for(i=0;i<n;++i)
       {
       	readFromFile.get(numberc);
		number = numberc - '0';
		//cout<<(int)number;
       	count[number]++;
       	setcolor(number+1);
       	if(number==0||number==1||number==2||number==3||number==4||number==5||number==6||number==7||number==8||number==9)
       	drawCircle(number,count[number]);
       	
       	delay(40);
       }

    
		getch();
}

void drawCircle(int digit,int c)
{
	circle(x[digit],y[digit],7+c);
}
