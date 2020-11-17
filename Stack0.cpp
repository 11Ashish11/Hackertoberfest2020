
#include<iostream>
using namespace std;
struct stack
{
    int capacity;
    int top;
    int *ar;
};
struct stack *s = (stack*)malloc(sizeof(stack));
void create()
{
    s->capacity = 5;
    s->top = -1;
    s->ar = (int*)malloc(sizeof(int)*s->capacity);
}
int isFull()
{
    if(s->top==s->capacity-1)
    {
        return 1;
    }
    else
        return 0;
}
int isEmpty()
{
    if(s->top==-1)
    {
        return 1;
    }
    else
        return 0;
}
void push()
{
    if(isFull()) cout<<"\nOverFlow";
    else
    {
        int n;
        cout<<"\nEnter a Number Which You Want to Insert :: ";
        cin>>n;
        s->top = s->top+1;
        s->ar[s->top] = n;
    }
}
void pop()
{
    if(isEmpty()) cout<<"\nUnderFlow";
    else
    {
        cout<<"\nNumber Is :: ";
        cout<<s->ar[s->top];
        s->top = s->top-1;
    }
}
int main()
{
    create();
    while(1){
    cout<<"\n\nPress 1: For Insert";
    cout<<" Press 2: For Pop :: ";
    int n;
    cin>>n;
    if(n==1) push();
    if(n==2) pop();
    }
}


