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
    string s;
    cin>>s;
    int count=0;
    int i=0,j=n-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        count++;
        i++;j--;
    }
    cout<<(count+1)/2<<endl;
}
    return 0;
}