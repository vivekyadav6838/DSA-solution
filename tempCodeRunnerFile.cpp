#include<bits/stdc++.h>
/*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{

string s;
cin>>s;
int k;
cin>>k;
int n = s.length();
string res="";
for(int i=0;i<n;i++)
{
    if(int(s[i])-int(s[i+1])<=k && int(s[i])-int(s[i+1])>=0 )
    res+=s[i];
}
cout<<res<<endl;

    return 0;
}