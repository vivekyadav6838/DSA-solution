#include <bits/stdc++.h>
/*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v; // wt variable for weighted
        cin >> u >> v;
        adj[u].push_back(u); // adj[u].push_back({u,wt}); for weighted graph
        adj[v].push_back(v); // comment this line for directed graph
    }
    vector<int> bfs;
    vector<int> vis(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            queue<int> q;
            q.push(i);
            vis[i] = 1;
            while (!q.empty())
            {
                int node= q.front();
                q.pop();
                bfs.push_back(node);
                for(auto it: adj[node]){
                    if(!vis[it]){
                        q.push(it);
                        vis[it]=1;
                    }
                }
            }
        }
    }
    cout<<"bfs is here"<<endl;
    for(auto it:bfs){
        cout<<it<<" "<<endl;
    }

    return 0;
}