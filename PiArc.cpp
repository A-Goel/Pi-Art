#include<stdio.h>
#include<graphics.h>
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
#include<string.h>
using namespace std;


int s[10]={56,20,344,308,272,236,200,164,128,92};
int e[10]={88,52,16,340,304,268,232,196,160,124};
int colours[10]={15,14,4,12,6,2,10,1,9,5};
char numberc,countc[10];

int number;
int main()
{
		void drawArc(int digit,int c);
		int i,count[10]={0},n;
		cout<<"Uptill how many digits of pi:";
		cin>>n;
	initwindow(1320, 700, "Pi's' Digits (Decagon)");
	settextstyle(2, HORIZ_DIR, 9);
       outtextxy(500,30,"THE DIGITS OF PI");
	   		settextstyle(4, HORIZ_DIR, 1);
	   		outtextxy(760,90,"0");
	   		outtextxy(910,200,"1");
	   		outtextxy(950,375,"2");
	   		outtextxy(910,560,"3");
	   		outtextxy(760,670,"4");
	   		
	   		outtextxy(560,670,"5");
	   		outtextxy(410,560,"6");
	   		outtextxy(360,375,"7");
	   		outtextxy(410,200,"8");
	   		outtextxy(560,90,"9");
	
	
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
       	drawArc(number,count[number]);
       	
       	delay(1);
       }
       int j,max=0;
       
       for(i=0;i<10;++i)
       {
            if(count[i]>count[max])
            max=i;
        }
       for(i=0;i<10;++i)
       {
           for(j=i+1;j<10;j++)
           {
                if(count[j]>count[i])
                {
                    
                    int temp=count[j];
                    count[j]=count[i];
                    count[i]=temp;
                    
            }
            
            }
        }
        setcolor(max+1);
        circle(660,380,282-count[0]);
       /*countc[0]=count[0]+'0';
       outtextxy(780,90,&countc[0]);
            
        countc[1]=count[1]+'0';
	   	outtextxy(930,200,&countc[1]);
	   	
	   	countc[2]=count[2]+'0';
	   	outtextxy(970,375,&countc[2]);
	   	
	   	countc[3]=count[3]+'0';
	   	outtextxy(930,560,&countc[3]);
	   	
	   	countc[4]=count[4]+'0';
	   	outtextxy(780,670,&countc[4]);
	   	
	   	countc[5]=count[5]+'0';
       outtextxy(540,670,&countc[5]);
            
        countc[6]=count[6]+'0';
	   	outtextxy(390,560,&countc[6]);
	   	
	   	countc[7]=count[7]+'0';
	   	outtextxy(340,375,&countc[7]);
	   	
	   	countc[8]=count[8]+'0';
	   	outtextxy(390,200,&countc[8]);
	   	
	   	countc[9]=count[9]+'0';
	   	outtextxy(540,90,&countc[9]);
	   		
               outtextxy(950,375,"2");
	   		outtextxy(910,560,"3");
	   		outtextxy(760,670,"4");
	   		
	   		outtextxy(560,670,"5");
	   		outtextxy(410,560,"6");
	   		outtextxy(360,375,"7");
	   		outtextxy(410,200,"8");
	   		outtextxy(560,90,"9");*/
    
		getch();
}

void drawArc(int digit,int c)
{
	arc(660,380,s[digit],e[digit],282-(1*c));
}

