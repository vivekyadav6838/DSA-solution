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
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    priority_queue <int> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    bool v=true;
    
    while(!pq.empty() && pq.top()!=1)
    {
        
        int x= pq.top();
        pq.pop();
        
        
        
            int y = x/2;
            int z= x-y;
            pq.push(y);
            pq.push(z);
            v=!v;
        

        
    }
    if(!v){
        cout<<"errorgorn"<<endl;
    }
    else{
        cout<<"maomao90"<<endl;
    }
}
    return 0;
}