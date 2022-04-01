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
    int i=0;
    int j=n-1;
    int p=INT_MIN;
    while(i<j)
    {
    p = max((arr[i++]) * (arr[j--]),p);

    }
    if(p==1){
        cout<<n<<endl;
    }
}
    return 0;
}