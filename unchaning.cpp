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
    int n;
    cin>>n;
    int da;
    int ga;
    for(int i=0;i<n;i++)
    {
        int ca=(1<<i);
        if(ca & n){
            da=i;
            ga=ca;
        }
    }
    int a=0;
    int fa=1;
    for(int i=0;i<da;i++){
        a+=(fa-1);
        fa*=2;
    }
    a+=(n-ga);
    cout<<a<<endl;

}
    return 0;
}