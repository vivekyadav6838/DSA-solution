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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int co=0;
    int cno=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        co++;
        cno++;

    }
    int d= abs(co-cno);
    if(d<=1)
    {
        cout<<"YES"<<endl;
    }
    else if(d==2)
    {
        if(cno%2==0 && co %2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
    return 0;
}