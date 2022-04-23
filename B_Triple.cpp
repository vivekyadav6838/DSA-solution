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
    int ans;
    int i,flag=0;
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n>=3){
    sort(arr,arr+n);
    
    for(i=0;i<n;i++){
        if(i+2<=n){
        if(arr[i]==arr[i+1] && arr[i+1]==arr[i+2]){
            ans=i;
            flag++;
        }
            
        }
    }
    if(flag==0){
        cout<<"-1"<<endl;
    }
    else{
        cout<<arr[ans]<<endl;
    }
    }
    else{
        cout<<"-1"<<endl;
    }
}
    return 0;
}