#include<bits/stdc++.h>
/*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int x;
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
      
        cin>>x;
        mp[x]++;
    }
    int res= mp.size();
    if((n-res)%2)
    res--;
    cout<<res<<endl;
}
    return 0;
}