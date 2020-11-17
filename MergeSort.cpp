

#include<iostream>
using namespace std;
void mergeSort(int ar[],int n, int arr[] , int m)
{
    int s = n+m;
    int r[s];
    int i=0,j=0,k=0;
    while(n && m)
    {
        if(ar[i]<=arr[j])
        {
            r[k]=ar[i];
            i++;
            n--;
        }
        else
        {
            r[k]=arr[j];
            j++;
            m--;
        }
        k++;
    }

    while(n)
    {
        r[k]=ar[i];
        i++;
        k++;
        n--;
    }

    while(m)
    {
        r[k]=arr[j];
        j++;
        k++;
        m--;
    }

    cout<<"\nSorted Merge Array : ";
    for(int i=0;i<s;i++) cout<<r[i]<<" ";
    cout<<endl;

}
int main()
{
    int a,b;
    cout<<"\nEnter the size of first array : ";
    cin>>a;
    cout<<"\nEnter the size of Second array : ";
    cin>>b;
    int ar[a],arr[b];
    cout<<"\nEnter the elements of First array : \n";
    for(int i=0;i<a;i++) cin>>ar[i];
    cout<<"\nEnter the elements of Second array : \n";
    for(int i=0;i<b;i++) cin>>arr[i];
    mergeSort(ar,a,arr,b);
}
