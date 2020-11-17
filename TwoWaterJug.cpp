/*PROBLEM STATEMENT:
You are given two unmarked jugs with capacities x and y liters. Determine the moves to obtain exactly n liters of water in any of the two jugs or both by the end.
Given that:
1. There is infinite supply of water.
2. Both the jugs are empty at the beginning.
Operations allowed:
1. Empty /fill a jug completely with water.
2. Pour water from one jug to another until one of the jugs is either empty or full. */

#include<bits/stdc++.h>
using namespace std;
int x;
int y;
void show(int a, int b);
int min(int w, int z)
{
if (w < z)
return w;
else
return z;
}
void show(int a, int b)
{
cout << setw(12) << a << setw(12) << b<<endl;
}
void s(int n)
{
int xq = 0, yq = 0;
int t;
cout << setw(15) <<"FIRST JUG"<< setw(15) <<"SECOND JUG"<<endl;
while (xq != n && yq!=n )
{
  if (xq == 0)
  {
    xq = x;
    show(xq, yq);
  }
  else if (yq == y)
  {
    yq = 0;
    show(xq, yq);
  }
  else
  {
    t = min(y - yq, xq);
    yq= yq + t;
    xq = xq - t;
    show(xq, yq);
      }
}
}
int main()
{
int n;
cout << "Enter the liters of water required out of the two jugs: ";
cin >> n;
cout << "Enter the capacity of the first jug: ";
cin >> x;
cout << "Enter the capacity of the second jug: ";
cin >> y;
if(n<x || n<y)
{ if(n%(__gcd(x,y))==0)
    s(n);
  else
  cout<<"This is not possible....\n";  
}
else
  cout<<"This is not possible....\n"; 
}
