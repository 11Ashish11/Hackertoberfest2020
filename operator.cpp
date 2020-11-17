#include<iostream>
using namespace std;
int main()
{
	int a,b,c=0;
	cout<<"Enter first number";
	cin>>a;
	cout<<"Enter second number";
	cin>>b;
	cout<<"Unary operation(number++)and(++number):"<<++a<<b++<<"\n";
	cout<<"Binary operation(number+number):"<<a+b<<"\n";
	cout<<"Ternary Operator:"<<((a>b)?a:b)<<"\n";
	cout<<"Relational operation:"<<(a,b)<<"\n";
	cout<<"Logical operation"<<(true&&false)<<" "<<(true&&true)<<" "<<(true||false)<<"\n";
	cout<<"Assigment operation:Sum:c="<<(c+=a)<<"\n";
	return 0;
}
