  #include <iostream>
#include<string>
#include<graphics.h>
#include<fstream>
using namespace std;

int main()
{
   int gd=DETECT,gm;
   initwindow(1600,900,"");
   initgraph(&gd,&gm,"");
   settextstyle(SOLID_FILL,HORIZ_DIR,5);
   outtextxy(300,20,"WELCOME TO THE QUIZ:");
   outtextxy(20,120,"RULES:");
   rectangle(100,500,400,600);
   rectangle(500,500,800,600);
   settextstyle(SOLID_FILL,HORIZ_DIR,4);
   outtextxy(150,510,"PLAY");outtextxy(550,510,"EXIT") ;
   POINT get3;
   int i=10;
   while(1)
   {
   GetCursorPos(&get3);
   if(GetAsyncKeyState(VK_LBUTTON))
   {
       int x=get3.x;
       int y=get3.y;
       if((x>=100&&x<=400)&&(y>=520&&y<=620))
       {
           setfillstyle(SOLID_FILL,2);
           floodfill(x,y-20,WHITE);
           delay(500);
           setfillstyle(SOLID_FILL,0);
           floodfill(x,y-20,WHITE);
           i=0;
           break;

       }
       else if((x>=500&&x<=800)&&(y>=520&&y<=620))
       {
           setfillstyle(SOLID_FILL,4);
           floodfill(x,y-20,WHITE);
           delay(500);
           setfillstyle(SOLID_FILL,0);
           floodfill(x,y-20,WHITE);
           cleardevice();
           outtextxy(200,200," ");
           delay(10000);
           closegraph();
           break;

       }
   }
   delay(10);
   }
   string arr[]={"output.txt","output2.txt","output3.txt","output4.txt"};
   int money=250;
   int reward=0,rew=0;
   for(;i<=3;)
   {
       cleardevice();
       outtextxy(100,500,"Question coming up.");delay(400);
       outtextxy(100,500,"Question coming up..");delay(400);
       outtextxy(100,500,"Question coming up...");delay(400);
       outtextxy(100,500,"Question coming up..");delay(400);
       outtextxy(100,500,"Question coming up.");delay(400);
       cleardevice();
       int m,d;
       if(i==3)
       {
           outtextxy(100,500,"**FINAL Question Coming your way**");
           delay(2000);
            m=45;d=8;
           cleardevice();
       }
       else{m=30;d=12;}
       for(int p=0,mone=250;p<600;p+=100)
       {
       settextstyle(BOLD_FONT,HORIZ_DIR,7);
       char ch2[100];
       sprintf(ch2,"$ %d",mone);
       outtextxy(1250,600-p,ch2);
       rectangle(1200,590-p,1500,690-p);
       mone*=2;
       }
       setfillstyle(SOLID_FILL,8);
       floodfill(1300,650-(i*100),WHITE);
       char ch11[100];
       sprintf(ch11,"Your Score: $ %d",rew);
       outtextxy(100,700,ch11);
       int x=20,y=90;
        if(i>=2)
        reward=rew;
   fstream fin(arr[i].c_str(),ios::in|ios::out);
   int k=0;
   while(k<=6)
{
   settextstyle(4,HORIZ_DIR,3);
   char ch[1000]{'\0'};
   string st;
   getline(fin,st);
   int j=0;
   while(st[j]!='\0')
   {
    ch[j]=st[j];
    j++;
   }
   outtextxy(x,y,ch);
   x=20;
   y=y+30;
   k++;
}
char ch1;
fin.get(ch1);
int arr[4]={4,4,4,4};
int ans=(int)(ch1-65);
arr[ans]=2;
   delay(100);
  settextstyle(BOLD_FONT,HORIZ_DIR,8);
  outtextxy(50,300,"A");outtextxy(350,300,"B");outtextxy(650,300,"C");outtextxy(950,300,"D");
  rectangle(10,550,610,700);outtextxy(70,570,"LIFE LINE:");
  rectangle(30,300,200,450);rectangle(300,300,470,450);rectangle(630,300,800,450);rectangle(930,300,1100,450);
  POINT get;
    int n=89.99;
    while(m>=0&&n>=-282)
    {

        char ch[10];
        ch[0]='\0';
        if(m<10)
        sprintf(ch,"0%d",m--);
        else
        sprintf(ch,"%d",m--);
        outtextxy(1000,600,ch);
        arc(1050,650,n,90,80);
        n-=d;
        delay(1000);
        int l=5;
    GetCursorPos(&get);
    if(GetAsyncKeyState(VK_LBUTTON))
          {
            int x=get.x;
            int y=get.y;
             if((x<=200&&x>=30)&&(y<=450&&y>=320))
             {
                 l=0;
              setfillstyle(SOLID_FILL,8);
              floodfill(x,y,WHITE);
              delay(1500);
              setfillstyle(SOLID_FILL,arr[0]);
              floodfill(x,y,WHITE);
              delay(1000);
              setfillstyle(SOLID_FILL,0);
              floodfill(x,y,WHITE);

             }
            if((x>=300&&x<=470)&&(y<=455&&y>=330))
            {
                l=1;
              setfillstyle(SOLID_FILL,8);
              floodfill(x,y,WHITE);
              delay(1500);
              setfillstyle(SOLID_FILL,arr[1]);
              floodfill(x,y,WHITE);
              delay(1000);
              setfillstyle(SOLID_FILL,0);
              floodfill(x,y,WHITE);

            }
          if((x>=630&&x<=870)&&(y<=450&&y>=320))
            {
                l=2;
              setfillstyle(SOLID_FILL,8);
              floodfill(x,y,WHITE);
              delay(1500);
              setfillstyle(SOLID_FILL,arr[2]);
              floodfill(x,y,WHITE);
              delay(1000);

              setfillstyle(SOLID_FILL,0);
              floodfill(x,y,WHITE);

            }
            if((x>=930&&x<=1100)&&(y<=450&&y>=320))
            {
                l=3;
              setfillstyle(SOLID_FILL,8);
              floodfill(x,y,WHITE);
              delay(1500);
              setfillstyle(SOLID_FILL,arr[3]);
              floodfill(x,y,WHITE);
              delay(1000);
              setfillstyle(SOLID_FILL,0);
              floodfill(x,y,WHITE);
            }
            if((x<=610&&x>=10)&&(y>=575&&y<=725))
            {
                setfillstyle(SOLID_FILL,GREEN);
                floodfill(200,650,WHITE);
                delay(500);
                setfillstyle(SOLID_FILL,0);
                floodfill(200,650,WHITE);
                delay(10);

            }
            if(arr[l]==2)
            {
                rew=rew+money;
                money*=2;
                cleardevice();
                char ch7[100],ch8[100];
                sprintf(ch7,"You WON :$ %d",(money/2));
                outtextxy(20,200,ch7);
                sprintf(ch8,"Total Rewards : $ %d",rew);
                outtextxy(20,300,ch8);
                 i++;
                settextstyle(BOLD_FONT,HORIZ_DIR,6);
                outtextxy(20,450,"**For next Question Press any key.....");
                break;
            }
            if(arr[l]==4)
            {
                cleardevice();
                outtextxy(30,200,"...YOU PICK THE WRONG CHOICE...");
                outtextxy(30,550,"GAME OVER....");
                char ch7[100],ch8[100];
                sprintf(ch7,"You WON : $ 0");
                outtextxy(20,350,ch7);
                sprintf(ch8,"Total Rewards : $ %d",reward);
                outtextxy(20,450,ch8);
                delay(2000);
                i=6;
                break;

            }

        }
   if(m<0)
           {
               cleardevice();
                outtextxy(200,400,"Your Time Out");
                char ch5[100];
                sprintf(ch5,"You Won: $ %d",reward);
                outtextxy(200,500,ch5);
                delay(3000);
                closegraph();

            }
   }
   getch();
   cleardevice();
   }
  getch();
   cleardevice();
}
