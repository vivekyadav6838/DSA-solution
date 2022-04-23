#include <bits/stdc++.h>
/*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
 void dfs(int node,vector<int>&vis,vector<int>adj[],vector<int>&storeDfs){
       storeDfs.push_back(node);
       vis[node]=1;
       for(auto it:adj[node]){
           if(!vis[it]){
                dfs(i,vis,adj,storeDfs);
           }
       }
   }
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
   

   vector<int>storeDfs;
   vector<int>vis(n+1,0);
   
   for(i=1;i<n;i++){
       if(!vis[i])
       {
           dfs(i,vis,adj,storeDfs);
       }
   }
  
  
    cout<<"dfs is here"<<endl;
     for(auto it:storeDfs)
   {
       cout<<it<<" "<<endl;
       
   }
   

    return 0;
}