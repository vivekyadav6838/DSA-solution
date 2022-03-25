#include<bits/stdc++.h>
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define int long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
// int t;
// cin>>t;
// while(t--){}
string s,t;
cin>>s>>t;
int n=s.length();
int m= t.length();
if(m>n )
{
    cout<<""<<endl;
}
int l,r,des=0;
int ans[]={-1,0,0};
unordered_map<char,int>m1;
for(int i=0;i<m;i++)
{
    m1[t[i]]++;
    
}
unordered_map<char,int>m2;
for(int i=0;i<n;i++)
{
    m2[s[i]]++;
}
while(r<s.length())
{
    
}
//
 for(auto x:m2)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }

    return 0;
}