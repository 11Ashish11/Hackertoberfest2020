#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k,c,j=0;
	cin>>n>>k;
	vector<int>arr;
	for(int i=0;i<n;i++)
	{
		cin>>c;
		arr.push_back(c);
	
	}
	for(int i=0;i<n;i++)
	{
	 if(arr[i]>=k)
	   j++;
	}
	cout<<j;
     
 return 0;
}
