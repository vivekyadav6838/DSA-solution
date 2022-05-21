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
    int arr[3];
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+3);
    if(arr[2]>arr[0]+arr[1])
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
    return 0;
}