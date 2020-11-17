#include<iostream>
using namespace std;
int main()
{
	int n,i,j,e;
	cin>>n;
	int a[n];
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for (i=1;i<n;i++)
	{
		e=a[i];
		j=i-1;
		while (j>=0 && a[j]>e)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=e;
	}
	for (i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
