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
    int n,k;
    cin>>n>>k;
    int s=n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);
   int i=0,j=n-1;
   if(n==1){
       cout<<"YES"<<endl;
       
   }
   else{
   while(i<j){
       if(arr[i]+arr[j]<=k){
           s--;
          j--; 

       }
       else
       i++;

   }
   if(s==1){
       cout<<"YES"<<endl;
   }
   else{
       cout<<"NO"<<endl;
   }
}
}
    return 0;
}