#include<bits/stdc++.h>
// /*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
  int arr[]={1,2,2,1,1,1,3};
  int preSum[8];
  preSum[0]=0;
  for(int i=1;i<=7;i++)
  {
     preSum[i]=preSum[i-1]+arr[i-1];
  }
  
    return 0;
}