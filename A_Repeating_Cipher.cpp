#include<bits/stdc++.h>
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define int long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
int n;
cin>>n;
string s;
cin>>s;
int len=1;
string ans="";
for(int i=0;i<n;i++)
{
    ans.push_back(s[i]);
    i+=(len++);
}
cout<<ans<<endl;
    return 0;
}