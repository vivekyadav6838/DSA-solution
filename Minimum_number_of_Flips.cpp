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

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int p=0,ng=0;
     for(int i=0;i<n;i++){
        if(arr[i]>0)
        p++;
        else
        ng++;
    }
    int ans=0;
   
     if(n%2!=0){
        ans=-1;
    }
    
    else if(p ==n || ng==n){
    ans=n/2;}
   
    else{
    int x= min(p,ng);
    ans= (n/2)-x;}

    cout<<ans<<endl;


}
    return 0;
}