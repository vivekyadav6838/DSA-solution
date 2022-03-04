#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int a,b,n;
        cin>>a>>b>>n;
        int ta=a;
        int tb =b;
        int c1=0,c2=0;
        while(a<=n)
        {
         c1++;
         a+=b;
         
        }
        while(b<=n)
        {c2++;
            b+=ta;
            
        }
        cout<<min(c2,c1)<<endl;

    }
}