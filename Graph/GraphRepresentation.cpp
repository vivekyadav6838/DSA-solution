#include<bits/stdc++.h>
/*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
 int n,m;
 cin>>n>>m;
 vector<int>adj[n+1];// for weighted vector<int> replace by vector<pair<int,int>
 for(int i=0;i<m;i++)
 {
     int u,v;// wt variable for weighted
     cin>>u>>v;
     adj[u].push_back(u);//adj[u].push_back({u,wt}); for weighted graph
     adj[v].push_back(v);// comment this line for directed graph

 }
    return 0;
}