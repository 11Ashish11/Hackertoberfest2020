
#include<iostream>
using namespace std;
void binary_search(int ar[],int n,int item)
{
    int first=0;
    int last=n;
    while(first!=last){
    int mid;
    mid=(first+last)/2;
    if(ar[mid]==item)
    {
        cout<<"\nItem found";
        return;
    }
    else if(ar[mid]>item)
    {
        last=mid-1;
    }
     else if(ar[mid]<item)
    {
        first=mid+1;
    }

}
    cout<<"\nItem not found";
}
int main()
{
    cout<<"\nHello User\n";
    int ar[]={1,11,22,33,44,55,66,77,88,99};
    binary_search(ar,10,66);
    binary_search(ar,10,99);
    binary_search(ar,10,1);
    binary_search(ar,10,55);
    binary_search(ar,10,100);
}
