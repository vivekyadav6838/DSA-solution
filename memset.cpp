#include<bits/stdc++.h>
using namespace std;
int main()
{
   int dp[4][5];
   memset(dp,-1,sizeof(dp));
   for(int i=0;i<4;i++)
   {
       for(int j=0;j<5;j++)
       {
           cout<<dp[i][j]<<" ";
       }
       cout<<endl;
   }
   int dp2[4][5]={4};
   for(int i=0;i<4;i++)
   {
       for(int j=0;j<5;j++)
       {
           cout<<dp2[i][j]<<" ";
       }
       cout<<endl;
   }
}