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
int l=0,u=0;
for(int i=0;i<s.length();i++)
{
    if(isupper(s[i]))
    {
    u++;
    }
    else{
        l++;
    }
}
string ns="";
if(u>l)
{
    for(int i=0;i<s.length();i++)
    {
        ns[i]+= (char)toupper(s[i]);
    }
    
}
else{
     for(int i=0;i<s.length();i++)
    {
        ns[i]+= (char) tolower(s[i]);
    }

    cout<<s<<endl;
}
    return 0;
}