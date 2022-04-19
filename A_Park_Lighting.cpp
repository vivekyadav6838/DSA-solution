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
    int r,c;
    cin>>r>>c;
    int l= (r*c)/2;
    int v= (r*c)%2;
   // cout<<l<<endl;
    
    cout<<l+v<<endl;
    }
    return 0;

}