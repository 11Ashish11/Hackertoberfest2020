#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n=9;int x,y,diff;
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n;j++)
        {
            diff=n+1-i;
            y=max(diff,i);
            x=min(diff,i);
            if((j==i)||(i+j)==n+1)
            cout<<"X ";
            else if((j<x)||(j>y))
            cout<<"X ";
            else
            cout<<"  ";
        }

         cout<<endl;
    }

}
