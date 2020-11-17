#include<iostream>
using namespace std;

struct BST
{
    int data;
    BST *left;
    BST *right;
}*head = NULL;

BST* createNode(int x)
{
    BST *temp = new (BST);
    temp->left = NULL;
    temp->right = NULL;
    temp->data = x;
    return temp;
}

void insert(int x)
{
    if(head==NULL) head = createNode(x);
    else
    {
        BST *temp = head;
        while(temp)
        {
            if(temp->data<=x)
            {
                if(!temp->right) temp->right = createNode(x),temp=NULL;
                else temp = temp->right;
            }
            else
            {
                if(!temp->left) temp->left = createNode(x),temp=NULL;
                else temp = temp->left;
            }
        }
    }
}

void preOrder(BST *temp)
{
    if(temp->left) preOrder(temp->left);
    if(temp->right) preOrder(temp->right);
    cout<<temp->data<<" ";
}

void preView()
{
    int x;
    cout<<"\nEnter 1: To TransVerse the BST";
    cout<<"\nEnter 2: To Check the height of BST\n";
    cin>>x;
    switch(x)
    {
    case 1:
        cout<<"\nPreOrder of BST is : ";
        preOrder(head);
        break;
   /* case 2:
        cout<<"\nHeight of BST is :";
        height();
        break;*/
    }
}

int main()
{
    cout<<"\nGiven Code is of BinarySearchTree :: ";
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++) cin>>x,insert(x);
    preView();
}
