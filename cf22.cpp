#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
string s1,s2,s3,s4,s5;
cin>>s1>>s2>>s3>>s4>>s5;
int c1=0,c2=0;
if(s[0]==s1[0]||s[0]==s2[0]||s[0]==s3[0]||s[0]==s4[0]||s[0]==s5[0])
{
c1++;
}
if(s[1]==s1[1]||s[1]==s2[1]||s[1]==s3[1]||s[1]==s4[1]||s[1]==s5[1])
{
c2++;
}
if(c2||c1)
{
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}