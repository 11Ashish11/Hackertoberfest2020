


//k closest element.
//Using minheap the complexity of the pblm reduce to nlogn to nlogk.

#include<iostream>
#include <queue>
#include<map>
using namespace std;

typedef pair<int, int> pi;

void K_close_Element(int arr[],int n,int k)
{
    map<int,int>m;
    for(int i=0;i<n;i++) m[arr[i]]++;
    priority_queue<pi, vector<pi>, greater<pi>>minh;

    for(auto i : m)
    {
        minh.push(make_pair(i.second,i.first));
    }

    while(minh.size()>0)
    {
        cout<<minh.top().second<<" ";
        minh.pop();
    }
}

int main()
{
    int arr[] = {1,1,1,3,2,2,4,7,9,18,0,2};
    K_close_Element(arr,12,3);
}




