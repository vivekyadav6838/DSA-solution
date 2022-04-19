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
  int count=0;
  int ev=0,od=0;
    for(int i=0;i<n;i++)cin>>arr[i];
    if(n==1){
        if(arr[0]%2==0)
        {
            cout<<"0"<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }

    }
    else{
        for(int i=0;i<n;i++)
        {
            
            if(arr[i]%2==0)
            ev++;
            else od++;

        }
        for(int i=0;i<n;i++){
            if((i%2)!=(arr[i]%2)){
                count++;
            }
        

        }
    }
    if(ev==od && count==0)
    cout<<"0"<<endl;
    else if(ev != od && count!=0){
        cout<<min(ev,od)<<endl;
    }
    
}
    return 0;
}