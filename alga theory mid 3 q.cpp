#include<bits/stdc++.h>
using namespace std;

const int N = 2e5;
int visited[N];

vector<int> adj_list[N];

bool is_cycle(int node, int p)
{
	visited[node] = 1;

	for(auto adj_node: adj_list[node])
	{
    	if(visited[adj_node] == 0)
    	{
        	bool it_cycle = is_cycle(adj_node, node);

        	if(it_cycle)
            	return true;

    	}
    	else if(adj_node != p)
    	{
        	return true;
    	}
	}

	visited[node] = 2;
	return false;
}

int main()
{
	int n, m;
	cin>>n>>m;

	for(int i=0; i<m; i++)
	{
    	int u, v;
    	cin>>u>>v;

    	adj_list[u].push_back(v);
    	adj_list[v].push_back(u);
	}
	bool is_cycle_exists = false;
	for(int i=1; i<=n; i++)
	{
    	if(visited[i] == 0)
    	{
        	bool it_cycle = is_cycle(i, -1);
        	if(it_cycle)
        	{
            	is_cycle_exists = true;
            	break;
        	}
    	}
	}
	if(is_cycle_exists)
    	cout<<"Cycle Exist\n";
	else
    	cout<<"No Cycle\n";
	return 0;
}
