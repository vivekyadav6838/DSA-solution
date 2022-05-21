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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)

    {
        cin>>arr[i];
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
        c++;
    }
    cout<<c<<endl;
}
    return 0;
}