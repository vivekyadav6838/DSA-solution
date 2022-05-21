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
    int c=0;
    int f=-1;
    int l=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            c++;
            if(f==-1){
                f=i;
            }
            else{
                l=i;
            }
        }
    }
    if(c<=1)
    {
        cout<<"0"<<endl;
    }
    else{
        int r= l-f-1;
        if(r==0)
        r++;
        cout<<r<<endl;
    }
}
    return 0;
}