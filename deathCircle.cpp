#include<iostream>
#include<queue>
using namespace std;

int findsum(int x)
{
    int sum=0;
   for(int i=1;i*i<=x;i++)
   {
       if(x%i==0)
       {
           if(x!=i*i)
               sum+=i+x/i;
            else sum+=i;
       }
   } 
   return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        int sum=0;
        cout<<findsum(n)<<endl;
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
              if(n!=i*i)sum+=findsum(i)+findsum(n/i);
              else sum+=findsum(i);
            }
        }
        cout<<sum<<endl;
    
    }
}