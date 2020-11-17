#include<bits/stdc++.h>
using namespace std ;
int main()
{
	long long n;
	vector<int> arr;
	vector<int> b;
	stack<int>s;
	int a;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		arr.push_back(a);
		while(n>0)
	{
		b[i]=arr[i]%2;
		arr[i]=arr[i]/2;
	}
	}
	for(int i=0;i<b.size();i++)
	{
		s.push(b[i]);
	}
for(int i=0;i<b.size();i++)
{
	cout<<s[i];
}

}
