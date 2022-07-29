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
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=0;
    
    for(int i=0;i<n;i++)
    {
        int x=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
               x^=arr[j];
            }
            if(x==arr[i])
            {
             ans=arr[i];
             break;  
            }
        }
    }
    cout<<ans<<endl;
}
    return 0;
}