#include<bits/stdc++.h>
// /*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int p=max(a,b);
    int q=max(c,d);
    if(p<q)
    cout<<"P"<<endl;
    if(q<p)
    cout<<"Q"<<endl;
    if(p==q)
    cout<<"TIE"<<endl;
}
    return 0;
}