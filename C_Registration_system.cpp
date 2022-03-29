#include<bits/stdc++.h>
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define int long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
map<string,int> f;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    string s;
    cin>>s;
    if(f[s]==0)
    {
        cout<<"OK"<<endl;
    }
    else{
        cout<<s<<f[s]<<endl;
    }
    f[s]++;
}
    return 0;
}