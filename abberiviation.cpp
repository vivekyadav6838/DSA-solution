// logic-> lcs use krna hai isme //


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int n = a.length();
    int m = b.length();
    string c="";
    for(int i=0;i<n;i++)
    {
        c+= (char)toupper(a[i]);
    }
    int dp[n+1][m+1];
  //  int j=0;
    for(int i=0;i<=n;i++)
    {
       // for(int j=0;j<m;j++ )
        {
            dp[i][0]=0;
        }
    }
    
     for(int j=0;j<=m;j++)
    {
       // for(int i=0;i<n;i++ )
        {
            dp[0][j]=0;
        }
    }
    int i ,j;
    for( i=1;i<=n;i++)
    {
        for( j=1;j<=m;j++)
        {
            if(c[i-1]==b[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
   //// cout<<dp[n][m]<<endl;
  //  cout<<n<<endl;
    if(dp[n][m]==n)
    cout<<"Yes"<<endl;
    else{
        cout<<"No"<<endl;
    }
 //cout<<c<<endl;

    
}