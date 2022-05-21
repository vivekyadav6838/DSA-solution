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
    int n,m;
    cin>>n>>m;
    int rel=INT_MAX;
     
    vector<string>s;
    for(int i=0;i<n;i++)
    {
        string s1;
        cin>>s1;
        s.push_back(s1);
    }
   
    for(int i=0;i<n-1;i++)
    {
         string a=s[i];
         string b=s[i+1];
       int   ans=0;
        for(int j=0;j<m;j++)
        {
           if(a[j]!=b[j])
           {
               

               ans+=  abs(int(a[j])-int(b[j]));
           }
           
        }
        rel =  min(ans,rel);

    }
    cout<<rel<<endl;
}
    return 0;
}