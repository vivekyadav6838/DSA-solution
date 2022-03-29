#include<bits/stdc++.h>
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define int long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n ,k,f=0;
    cin>>n>>k;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int a= arr[i];
        if(mp.find(k-a)==mp.end())
        {
            mp[arr[i]]++;

        }
        else{
            f=1;
            cout<<"YES"<<endl;
            break;
        }

    }


    // sort(arr,arr+n);
    // int l=0;
    // int r=n-1;
    // int f=0;
    // while(l<r)
    // {
    //     int v = arr[r]-arr[l];
    //     if(v==k)
    //     {
    //         cout<<"YES"<<endl;
    //         f=1;
    //         break;
    //     }
    //     if(v<k)
    //     {
    //         l++;

    //     }
    //     if(v>k)
    //     {
    //         r--;
    //     }
    // }
    if(f==0)
    {
        cout<<"NO"<<endl;
     }

   
}
    return 0;
}