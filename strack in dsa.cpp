#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int a[100001];
int s1=-1;
int s2=-2;
void push1(int x)
{
	s1=s1+2;
	a[s1]=x;
	
}

void push2(int x)
{ 
   s2=s2+2;
   a[s2]=x;
 
}

int pop1()
{
	int ans;
	if(s1>=1)
	{
	     ans=a[s1];
		s1=s2-2;
	}
	else
	return 0;
	return ans;
}
int pop2()
{
	int ans;
	if(s2>=0)
	{
		ans=a[s2];
	   s2=s2-2;
	}
	else
	return 0;
	return ans;
}
int main()
{
	push1(99);
	push1(98);
	push1(96);
	
	push2(28);
	push2(22);
	push2(29);
	
	int k1=pop1();
	int k2=pop2();
	
	cout<<"element poped from stack1 is "<<k1<<endl;
	cout<<"element poped from stack2 is "<<k2<<endl;
	}
