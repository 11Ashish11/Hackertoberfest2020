#include <iostream>
using namespace std;
bool arr[10001]={false};
int kth[10000];
int n;
void fun()
{
    arr[0]=false,arr[1]=false;
    for(int i=2;i*i<=10000;i++)
    {
        if(!arr[i])
        {
            for(int j=i*i;j<=10000;j+=i)
            arr[j]=true;
        }
    }
    for(int i=0;i<=10000;i++)
    {
        if(!arr[i])kth[++n]=i;
    }
}
int main() 
{
	int t;
    cin>>t;
    n=0;
    fun();
    while(t--)
    {
        int n1,k;
        cin>>k;
        if(k<=n)cout<<kth[k]<<endl;
        else cout<<-1<<endl;
    }

}