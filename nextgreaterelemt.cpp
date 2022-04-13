#include<bits/stdc++.h>
/*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
// int t;
// cin>>t;
// while(t--){}
  int arr[]={3,4,2,9,6,5,7,3};
  int ans[8];
  ans[0]=arr[0];
  for(int i=0;i<8;i++)
  {
      for(int j=i+1;j<8;j++)
      {
          if(arr[j]>arr[i])
          {
            ans[i]=arr[j];
            break;
          }
          if(j==7)
          {
              ans[i]=-1;
          }
      }
  }
  for(int i=0;i<8;i++)
  {
      cout<<ans[i]<<" "<<endl;
  }
    return 0;
}