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
    if(a==1 && b==1)
    {
        cout<<"0"<<endl;
    }
    else if(a==1){
        cout<<"-1"<<endl;
    }
    else if(b==1){
        cout<<a-1<<endl;
    }
    else {
        if((a+b)%2==0){
            cout<<a+b<<endl;
        }
        else{
            cout<<a+b+2<<endl;
        }
    }
}
    return 0;
}