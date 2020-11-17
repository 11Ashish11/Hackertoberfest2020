#include<iostream>
using namespace std;
int main()
{
	int n,i,flag=0;
	cout<<"Enter any number"<<endl;
	cin>>n;
	if(n<=1)
	 flag=1;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		flag=1;
		break;
	}
	if(flag==1)
	cout<<"It is not prime number"<<endl;
	else
	cout<<"It is prime"<<endl;
	
}
