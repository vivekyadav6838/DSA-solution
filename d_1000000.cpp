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
 int x=1;
while(t--){
   
    
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++)
    { int c;
    cin>>c;
        arr.push_back(c);
    }
    int ans=0;
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<n;i++)
    {
        if(ans+1<=arr[i] )
        {
        ans++;
        }
    }
    // for(int i=1;i<n+1;i++)
    // cout<<arr[i]<<" ";
   cout<<"Case #"<<x++<<":"<<" "<<ans<<endl;
}
    return 0;
}