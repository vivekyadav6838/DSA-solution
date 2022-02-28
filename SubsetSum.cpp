#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int s=0;
    cin>>s;
   bool dp[n+1][s+1];
   

   
   for(int i=0;i<n+1;i++)
   {
       for(int j=0;j<s+1;j++)
       {
           if(i==0)
           {
               dp[i][j]=false;
           }
           if(j==0)
           {
               dp[i][j]=true;
           }
       }
   }
   for(int i=1;i<n+1;i++)
   {
       for(int j=1;j<s+1;j++)
       {
           if(arr[i-1]<=j)
           {
            dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
           }
           else{
               dp[i][j]= dp[i-1][j];
           }
       }
   }
   cout<<char(dp[n][s])<<endl;

}