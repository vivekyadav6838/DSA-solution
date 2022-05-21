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
    string s;
    cin>>s;
    int sum1=0;
    int sum2=0;
    for(int i=0;i<3;i++)
    {
        int x= atoi(s[i]);
        sum1+=x;

    }
     for(int i=3;i<6;i++)
    {
        int x= atoi(s[i]);
        sum2+=x;

    }
    if(sum1==sum2)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
    return 0;
}