#include<iostream>
using namespace std;
int main()
{
    int i,n,mid1,mid2,first,last,search;
    cin>>n;
    int a[n];
    for (i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>search;
    first=0;
    last=n-1;
    while (first<=last)
    {
        mid1=first+(last-first)/3;
        mid2=last-(last-first)/3;
        if(a[mid1] == search)
        {
         cout<<mid1;
         break;
		}
      if(a[mid2] == search)
         cout<<mid2;
      if(search < a[mid1])
          last=mid1-1;
       else if(search > a[mid2])
         first=mid2+1;
	    else 
	    {
	     	first=mid1+1;
	     	last=mid2-1;
		}
	}
}
