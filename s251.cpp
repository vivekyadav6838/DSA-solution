#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int n,x;
        cin>>n>>x;
       if(x>n)
       {
           cout<<x%n-1<<endl;
       }
       else if(x==n){
           cout<<n<<endl;
       }
       else{
           cout<<x<<endl;
       }

    }
}