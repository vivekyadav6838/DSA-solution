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
    int arr[32]={};
    for(int i=0;i<n;i++)
    {
        int var,jar=0;
        int count=0;
        cin>>var;
        while (var)
        {
            if(arr[jar]==0)

            arr[jar]=var%2;
            var/=2;
            jar++;
        }
        
    }
    int res=0;
    int v;
    int vrr[68];
    //
    for(int i =0;i<32;i++)
    {
        res+=arr[i];
    }
    cout<<res<<endl;
    
}
    return 0;
}