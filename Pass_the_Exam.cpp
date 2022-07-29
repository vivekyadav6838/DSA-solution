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
    int a,b,c;
    cin>>a>>b>>c;
    string s;
    if(a>=10 && b>=10 && c>=10)
    {
        if(a+b+c>=100)
        s="PASS";
        else
        s="FAIL";

    }
    else{
          s="FAIL";
    }

    cout<<s<<endl;
}
    return 0;
}