#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,w;
    cin>>n>>k>>w;
    int c=0;
    for(int i=1;i<=w;i++)
    {
      c+=i*n;
    }
    if(c>k)
    cout<<c - k <<endl;
    else
    cout<<"0"<<endl;
}