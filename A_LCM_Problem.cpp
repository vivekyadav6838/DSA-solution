#include<bits/stdc++.h>
/*** @author Vivek Yadav ***/
#define for(i,n) for (int i = 0; i < n; ++i)
#define ll long long int
#define arr(n) int arr[n]
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int a,b;
    cin>>a>>b;
    if(2*a<=b)
    {
        cout<<a<<" "<<2*a<<endl;
    }
    else{
        cout<<"-1"<<" "<<"-1"<<endl;
    }
}
    return 0;
}