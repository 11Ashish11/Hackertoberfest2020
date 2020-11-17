#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i,n,m,x,item;
	cin>>n;
	int a[n];
	for (i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>item;
	i = 0;
   m = sqrt(n); 
   while(a[m] <= item && m < n) 
   { 
      i = m; 
      m +=sqrt(n);
      if(m > n - 1)  
         break;
   }

   for(x = i; x<m; x++) 
   { 
      if(a[x] == item)
        cout<<x;
   }
	
}
