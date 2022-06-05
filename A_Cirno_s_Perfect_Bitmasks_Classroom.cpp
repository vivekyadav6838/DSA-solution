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
    int n;
    cin>>n;
    int i=0;
   if(n%2)
   {
       if(n>1)
       {
           cout<<"1"<<endl;
       }
       else{
           cout<<"3"<<endl;
       }
   }
   else{
       if(!(n&(n-1)))
       {
          cout<<n+1<<endl;
       }
       else{
            cout<<(n&~(n-1))<<endl;
       }
   }
   // cout<<i<<endl;
}
    return 0;
}