#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
vector<int> adj_list[N];
int n,m;
int visited[N];

bool DFS(int node)
{
    if(node == n)
        return true;

    visited[node] = 1;

    for(auto adj_node: adj_list[node])
    {
        if(!visited[adj_node])
        {
            if(DFS(adj_node))
                return true;;
        }
    }

    return false;
}

int main()
{
    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
        int u, v;
        cin>>u>>v;

        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src = 1;
    bool goal = DFS(src);

    if(goal)
        cout<<"YES\n";
    else
        cout<<"NO\n";

    return 0;
}
