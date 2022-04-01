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
     int n,m;
     cin>>n>>m;
     if(m==0)
     cout<<n*2<<endl;
     else{
     if(m>n)
     {
         cout<<(2*n)-n<<endl;
     }
     if(m<n)
     {
         cout<<(2*n)-m<<endl;
     }
     if(m==n)
     cout<<n<<endl;
     }
}
    return 0;
}