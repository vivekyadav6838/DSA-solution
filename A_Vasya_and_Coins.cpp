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
    int a,b;
    cin>>a>>b;
    if(a==0 && b==0){
        cout<<"1"<<endl;
    }
    else{
        if(a==0)
        {
            cout<<"1"<<endl;
        }
        else{
            cout<<a+(2*b)+1<<endl;
        }
    }
}
    return 0;
}