#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int>m;
    m["v"]=325;
    m["k"]=245;
    m.insert({"vivek ",999});
    for(auto x:m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    
}