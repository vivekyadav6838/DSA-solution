#include<bits/stdc++.h>
/*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;

int main() {
 int t;cin>>t;
 while(t--){
     int n;
     cin>>n;
     string s;cin>>s;
     int cnt1=0,cnt2=0;
     for (int i=0;i<n; i++) {
        if(s[i]=='1'){
        cnt2++;
         if(s[i]==s[i+1]){
             cnt1++;
         }
         }

     }
              if(cnt2==0)
              cout<<0<<endl;
         else{
             if(cnt1==0)cout<<1<<endl;
             else{cout<<2<<endl;}
             
         }
}
 return 0;
}