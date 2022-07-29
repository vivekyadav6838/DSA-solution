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
   long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum = arr[0]+arr[n-1];
   //sort(arr,arr+n);
   //long long int ans = arr[n-2]+arr[n-1];
   int ans=INT_MIN;
   for(int i=0;i<n-1;i++)
   {
        ans =arr[i]+arr[i+1];
       ans= max(sum,ans);

   }
    cout<<ans<<endl;

}
    return 0;
}