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
    int l=0;
    string s;
    cin>>l>>s;
    int z=0,o=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]=='0')
        {
            z++;
        }
        else{
            o++;
        }
    }
    if(z==0)
    {
        cout<<o*2<<endl;
    }
    else if(z==0 || o==0){
        cout<<"1"<<endl;

    }
    else{
        cout<<min(z,o)*2+1<<endl;
    }
}
    return 0;
}