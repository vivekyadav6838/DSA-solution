#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int>adj[],int v,int u){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printgraph(vector<int>adj[],int v)
{
    for(int i=0;i<v;i++)
    {
        for(int x:adj[i])
        {
            cout<<x<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int v=4;
    vector<int>adj[v];
    addedge(adj,0,1);
    addedge(adj,0,2);
    addedge(adj,1,2);
    addedge(adj,1,3);
    printgraph(adj,v);
   // addedge(adj,0,1);


    
}