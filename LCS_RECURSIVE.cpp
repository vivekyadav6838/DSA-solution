#include<bits/stdc++.h>
#define for(i,n) for (int i = 0; i < n; ++i)
using namespace std;
int lcs_recrsive(string &s1, string &s2,int n,int m){
    if(n==0|| m==0)
    return 0;
    if(s1[n-1]==s2[m-1]){
        return 1 + lcs_recrsive(s1,s2,n-1,m-1);

    }
    else{
        return max(lcs_recrsive(s1,s2,n,m-1),lcs_recrsive(s1,s2,n-1,m));
    }
    
}
int main()
{
string s1;
cin>>s1;
int n= s1.length();
string s2;
cin>>s2;
int m = s2.length();
int a= lcs_recrsive(s1,s2,n,m);
cout<<a<<endl;

    return 0;
}