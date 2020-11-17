
#include<iostream>
#include<stdlib.h>
using namespace std;
struct binarytree
{
    int info;
    binarytree *left=NULL,*right=NULL;
};
struct binarytree *start=NULL;
struct binarytree* createnode()
{
    struct binarytree *t;
    t=(struct binarytree*)malloc(sizeof(struct binarytree));
    return(t);
}
void filldata()
{
    int i;
    struct binarytree *par;
    struct binarytree *n=createnode();
    n->left=NULL;
    cout<<"\nEnter the data";
    cin>>i;
    n->info=i;
    n->right=NULL;
    if(start==NULL) start=n;
    else
    {
        par=start;
        while(par!=NULL)
        {
            if(par->info>i)
            {
                if(par->left==NULL){
                    par->left=n;
                    par=par->left->left;
                    continue;}
                par=par->left;
            }
            else if(par->info<i){
                if(par->right==NULL){
                    par->right=n;
                     par=par->right->right;
                     continue;}
                par=par->right;

        }
    }
}
}
void preorder(struct binarytree *temp)
{
    if(start==NULL)
    {
        cout<<"\nTree is empty";
    }
    if(temp)
    {
	preorder(temp->left);
    cout<<temp->info<<" ";
    preorder(temp->right);
}
}
void inorder(struct binarytree *temp)
{
    if(start==NULL)
    {
        cout<<"\nTree is empty";
    }
    if(temp)
    {
   	cout<<temp->info<<" ";
    inorder(temp->left);
    inorder(temp->right);
}
}
void postorder(struct binarytree *temp)
{
    if(start==NULL)
    {
        cout<<"\nTree is empty";
    }
    if(temp)
    {
   	postorder(temp->right);
    cout<<temp->info<<" ";
    postorder(temp->left);

}
}
void review()
{
    cout<<"\nPress 1. TO INSERT DATA";
    cout<<"\nPress 2. TO PREORDER VIEW";
    cout<<"\nPress 3. TO INordered";
    cout<<"\nPress 4. TO Postordered";
    cout<<"\nPress 5. TO EXIT";
    cout<<"\nENTER YOUR CHOICE";
    int k;
    cin>>k;
    switch(k)
    {
    case 1:
        filldata();
        break;
    case 2:
       preorder(start);
        break;
    case 3:
        inorder(start);
        break;
    case 4:
        postorder(start);
        break;
    case 5:
        exit(0);
        break;
    default:
        cout<<"\nInvalid data";
    }
}
int main()
{
    while(1)
        review();
}
