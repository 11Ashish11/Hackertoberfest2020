

//k Sorted array.
//Using minheap the complexity of the pblm reduce to nlogn to nlogk.
#include<iostream>
#include <queue>
using namespace std;

void K_sorted(int arr[],int n,int k)
{
    priority_queue <int, vector<int>, greater<int>>minh;
    for(int i=0;i<n;i++)
    {
        if(minh.size()>k)
        {
            cout<<minh.top()<<" ";
            minh.pop();
        }
        minh.push(arr[i]);
    }
    while(minh.size()>0) cout<<minh.top()<<" ",minh.pop();
}

int main()
{
    int arr[] = {6,5,3,2,8,10,9};
    K_sorted(arr,7,3);
}

