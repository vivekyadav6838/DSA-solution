#include<bits/stdc++.h>
// /*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n,m;
    // int a,b,c,d=0;
    // int brr[100];
    cin>>n>>m;
    char arr[n][m];
     int r=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
     int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]=='R')
            {
            r=j;
            i= n+1;
            break;
            }
        }
    }
  
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j][i]=='R')
            {
             cout<<"NO"<<endl;
             flag++;
             i = r+5;
             break;
            }
        }
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    

}
    return 0;
}