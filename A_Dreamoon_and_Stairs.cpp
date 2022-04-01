#include<bits/stdc++.h>
/*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
int n, m ;
    cin>>n>>m;
 
    int lower_bound = (n+1)/2 ;
    int ans = (lower_bound+m-1)/m*m ;
    if(ans>n)
        ans = -1 ;
 
    cout<<ans<<endl;
 
    
    return 0;
}