#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        if(n==2)
        {
            cout<<"-1"<<endl;
            return 0;
        }
        if(n%2!=0)
        {
            for(int i=1;i<n+1;i++)
            {
                cout<<i+" ";
            }
        }
        else{
            int k=n-3;
            for(int i=1;i<=k;i++)
            {
                cout<<i+" ";
            }
            cout<<n+" "+(n-2)<<+" "+(n-1);
        }
        cout<<endl;

    }
   
}