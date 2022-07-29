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
   long long int n;
   long long int m,k,l=0;
    cin>>m;
    // if(m==2){
    //     ans=0;

    // }
    if(m%2!=0)
    {
    long long int f=m/2;
    cout<<f*(m-f)-1<<endl;
    }
    else{
        if((m/2)%2==0){
            long long int f =(m/2)-1;
            cout<<f*(m-f)-1<<endl;
            int v=0;
        }
        else{
            long long int f=(m/2)-2;
            cout<<f*(m-f)-1<<endl;
        }
    }
    //cout<<ans<<endl;
}
    return 0;
}