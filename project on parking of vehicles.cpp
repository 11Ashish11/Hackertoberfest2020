#include<iostream>
using namespace std;
int main()
{
	int num;
	int amount=0,count=0;
	int bicycle=0;
	int rickshaw=0;
	int autorickshaw=0;
	int bike=0;
	int car=0;
	int bus=0;
	while(true)
	{
	
	cout<<"\npress 1 for bicycle";
	cout<<"\npress 2 for rickshaw";
	cout<<"\npress 3 for autorickshaw";
	cout<<"\npress 4 for bike";
	cout<<"\npress 5 for car";
	cout<<"\npress 6 for bus";
cout<<"\npress 7 for total records";
cout<<"\npress 8 to delete records";
cout<<"\npress 9 to exit";
cin>>num;
 if(num==1)
 
 {
 	if(count<=50)
 	{
       bicycle=bicycle+1;
       amount=amount+10;
       count=count+1;
}
else
cout<<"no more vehicles,parking is full";
}
else if(num==2)
 {
 	if(count<=50)
 	{
       rickshaw=rickshaw+1;
       amount=amount+20;
       count=count+1;
}
else
cout<<"no more vehicles,parking is full";
}
else if(num==3)
 {
 	if(count<=50)
 	{
       autorickshaw=autorickshaw+1;
       amount=amount+40;
       count=count+1;
}
else
cout<<"no more vehicles,parking is full";
}
else if(num==4)
 {
 	if(count<=50)
 	{
       bike=bike+1;
       amount=amount+50;
       count=count+1;
}
else
cout<<"no more vehicles,parking is full";
}
else if(num==5)
 {
 	if(count<=50)
 	{
       car=car+1;
       amount=amount+100;
       count=count+1;
}
else
cout<<"no more vehicles,parking is full";
}
else if(num==6)
 {
 	if(count<=50)
 	{
       bus=bus+1;
       amount=amount+200;
       count=count+1;
}
else
cout<<"no more vehicles,parking is full";
}
else if(num==7)
 {
 cout<<"\n\nthe total amount earned="<<amount;
 cout<<"\nthe total vehicles parked="<<count;
 cout<<"\n\nthe total bicycle parked="<<bicycle;
 cout<<"\nthe total rickshaw parked="<<rickshaw;
 cout<<"\nthe total autorickshaw parked="<<autorickshaw;
 cout<<"\nthe total bike parked="<<bike;
 cout<<"\nthe total car parked="<<car;
 cout<<"\nthe total bus parked="<<bus;
 
}
else if(num==8)
 {
 cout<<"\n\namount=0";
 cout<<"\ncount=0";
}
else if(num==9)
exit(0);
else
{
cout<<"invalid choice";
}
}
return(0);
}
