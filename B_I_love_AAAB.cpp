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
    string s;
    cin>>s;
    bool v=false;
    int count=0;
    int n= s.length();
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
         v=true;
         break;}

    }
    if(n==1 || s[n-1]=='A'|| !v){
        cout<<"NO"<<endl;
        
        
    }
    else{
    
    for(int i=0;i<n;i++){
        if(s[i]=='A')
        count++;
        else
        count--;
        if(count<0){
            cout<<"NO"<<endl;
            f++;
        }}
    if(f==0)
    cout<<"YES"<<endl;
    }
    
}
    return 0;
}