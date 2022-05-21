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
    int x,y;
    cin>>x>>y;
    int a= (500-(x*2))+(1000-((y+x)*4));
    int b = (1000-(y*4))+(500-((y+x)*2));
    cout<<max(a,b)<<endl;
}
    return 0;
}