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
   long long int an,bk,a,b=0,c=0;
    cin>>an>>bk;
    if(bk==1)
    {
        if(an%2){
            cout<<"ODD"<<endl;
        }
        else{
            cout<<"EVEN"<<endl;
        }
        
    }
    else{
        if(bk==2){
            cout<<"ODD"<<endl;
        }
        else{
            cout<<"EVEN"<<endl;
        }
    }
    
}
    return 0;
}