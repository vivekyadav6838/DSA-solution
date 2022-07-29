#include<bits/stdc++.h>
/*** @author Vivek Yadav ***/
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
    int ans=0;
    if(x==0 || y==0)
    {
        ans=0;
    }
    else if(x%3==0 || y%3==0)
    {
        ans=0;
    }
    else if(x==y) {
        ans=1;
    }
    else{
        while(x%3!=0 && y%3!=0)
        { int a=x;
        int b=y;
            x=abs(a-b);

            y=abs(a-b);
            ans++;
        }
    }
    cout<<ans<<endl;

}
    return 0;
}