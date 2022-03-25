#include<bits/stdc++.h>
//#define int long long int
#define arr(n) int arr[n]
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
string n;
    cin>>n;
    
    int ans=0;
    if(stoi(n)%9==0)
    {
        cout<<stoi(n)+9<<endl;
    }
    else{
        int i=0;
    while(stoi(n)%9!=0)
    { 
        int c= stoi(n);
        int l=n.length();
     n.append(i,l);
     if(stoi(n)%9==0)
     {
         
         //ans= min(c*9,stoi(n));
         if(c *9<stoi(n))
         {
             ans=c*9;
         }
         else{
             ans= stoi(n);
         }
     }  
     i++;
     if(i==10){
         i=0;
     } 
    }
    
    
    cout<<ans<<endl;
    }
}
    return 0;
}