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
   int arr[n];
   int brr[n];
 long long ans=0;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   for(int i=0;i<n;i++)
   {
       cin>>brr[i];
   }
   int j=1;
   for(int i=0;i<n;i++)
   {
       if(arr[i]<brr[i])
       {
           swap(arr[i],brr[i]);
           
       }
   }
    
   for(int i=1;i<n;i++)
   {
       ans+= abs(arr[i]-arr[i-1]) + abs(brr[i]-brr[i-1]);
   }
   cout<<ans<<endl;

}
    return 0;
}