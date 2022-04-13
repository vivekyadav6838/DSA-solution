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
    int n,x;
    cin>>n>>x;
    if(n==1 || n==2){
        cout<<"1"<<endl;
    }
    else{
        int f=2;
        int i;
        for(i=2;i<=n;i++)
        { f+=x;
            if(f<n)
            {
           continue;
            }
            else{
                break;
            }
        }
        cout<<i<<endl;
    }
}
    return 0;
}