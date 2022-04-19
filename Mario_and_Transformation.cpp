#include<bits/stdc++.h>
/*** @author Vivek Yadav ***/
#define for(i,n) for (int i = 0; i < n; ++i)
#define ll long long int
#define arr(n) int arr[n]
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int x;
    cin>>x;
    x=x%3;
    if(x==0)
    {
        cout<<"NORMAL"<<endl;
    }
    if(x==1)
    {
        cout<<"HUGE"<<endl;
    }
     if(x==2)
    {
        cout<<"SMALL"<<endl;
    }
}
    return 0;
}