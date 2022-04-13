#include<bits/stdc++.h>
/*** @author Vivek Yadav ***/
 #define for(i,n) for (int i = 0; i < n; ++i)
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
    for(i,n)
    
    {
        cin>>arr[i];
    }
    int c=1;
    int c2=0;
    for(i,n)
    {
        if(arr[i]!=arr[i+1])
        {
             c++;

        }
        if(arr[i]==arr[i+1])
        {
       c2+=1;
        }
    }
    if(c==n && c2==0)
    {
        cout<<n<<endl;
    }
    else if(c2!=0){
        cout<<n+(c2/2)<<endl;
    }
}
    return 0;
}