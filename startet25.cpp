#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int ans=min(x,y);
        int b = x/2;
        int c=y;
        cout<<min(b,c)<<endl;

    }
}