#include<queue>
#include<iostream>
using namespace std;
class Graph_Matrix
{
    private:
        int e_count;
        int v_count;
        int **adj;
    public:
        Graph_Matrix();
        void Create_Graph(int,int);
        void Print_Matrix();
        void Print_Adjacent_Nodes(int);
        bool check_Neighbors(int , int);
        bool Isolated_Node(int);
        ~Graph_Matrix();
        int size()  {return v_count;}
};

Graph_Matrix::Graph_Matrix()
{
    e_count = -1;
    v_count = -1;
    adj = NULL;
}

void Graph_Matrix::Create_Graph(int v, int e)
{
    v_count = v;
    e_count = e;
    adj = new int*[v];
    for(int x = 0; x<v; x++)
        adj[x] = new int[v];

    for(int x = 0; x<v; x++)
        for(int z = 0; z<v; z++)
            adj[x][z] = 0;

    for(int x = 0; x<e; x++)    {
        cout<<endl<<"Enter Node numbers connecting edge"<<x<<" : ";
        int n,m;
        cin>>n>>m;
        adj[n][m] = 1;
        adj[m][n] = 1;
    }
}


void Graph_Matrix::Print_Matrix()
{
    for(int x = 0; x<v_count; x++)  {
        for(int z = 0; z<v_count; z++)
            cout<<adj[x][z]<<" ";
        cout<<endl;
    }
}



void Graph_Matrix::Print_Adjacent_Nodes(int n)
{
    for(int x = 0; x<v_count; x++)
        if(adj[n][x] == 1)
            cout<<"v"<<n<<"  = v"<<x<<endl;
}



bool Graph_Matrix::check_Neighbors(int u,int v)
{
    if(adj[u][v] == 1)
        return true;
    return false;
}



bool Graph_Matrix ::Isolated_Node(int n)
{
    for(int x = 0; x<v_count; x++)
        if(adj[n][x] != 1)
            return false;
    return true;
}



Graph_Matrix::~Graph_Matrix()
{
    for(int x = 0; x<v_count; x++)
        delete []adj[x];
    delete []adj;
}



void BFS_Traverse(Graph_Matrix &G, int S)
{
    int temp,x;
    queue<int> Q;
    Q.push(S);
    bool arr[G.size()];
    for(x = 0; x<G.size(); x++)
        arr[x] = false;
    arr[S] = true;
    while(!Q.empty())   {
        temp = Q.front();
        Q.pop();
        for(x = temp+1; x<G.size(); x++)
            if(G.check_Neighbors(temp,x))
                if(arr[x]==false)   {
                    Q.push(x);
                    arr[x] = true;
                }
        cout<<"v"<<temp<<endl;
    }
}

int main()
{
    Graph_Matrix g1;
    g1.Create_Graph(4,5);
    BFS_Traverse(g1,0);
    return 0;
}

