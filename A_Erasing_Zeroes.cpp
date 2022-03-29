#include<bits/stdc++.h>
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define int long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int fo=0,count=0;;
    int lo=0;
    int v=0;
    int n = s.length();
    // if(n==1)
    // {
    //     if(s[0]=='0')
    //     cout<<"0"<<endl;
    // }
    //else{
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            fo=i;
            for(int j=i+1;j<n;j++)
            {
                if(s[j]=='1')
                {
                    lo=j;
                    break;
                }
            }
            count = lo-fo-1;
            if(count>0)
            {
                v=v+count;
            }

        }
    }
   // }
    cout<<v<<endl;
   
        
   
}
    return 0;
}