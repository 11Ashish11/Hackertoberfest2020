
#include<iostream>
using namespace std;

struct Graph
{
   int nodes;
   int edges;
   int **adj;
};

void create()
{
    struct Graph *G = (struct Graph*)malloc(sizeof(struct Graph));
    cout<<"\nEnter the number of Nodes  ::  ";
    cin>>G->nodes;
    cout<<"\nEnter the number of Edges  ::  ";
    cin>>G->edges;
    G->adj = (int**)malloc(sizeof(int)*(G->nodes*G->nodes));
    for(int i=0;i<G-4>nodes;i++)
    {
        G->adj[i] = (int*)malloc(sizeof(int)*(G->nodes));
    }
    for(int i=0;i<G->nodes;i++)
    {
        for(int j=0;j<G->nodes;j++)
        {
            G->adj[i][j] = 0;
        }
    }
    cout<<"\nEnter the nodes in pairs  ::  ";
    for(int i=0;i<G->edges;i++)
    {
        int n,m;
        cin>>n>>m;
        G->adj[n][m] = 1;
        G->adj[m][n] = 1;
        cout<<endl;
    }
    for(int i=0;i<G->nodes;i++)
    {
        for(int j=0;j<G->nodes;j++)
        {
            cout<<G->adj[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    create();
}
