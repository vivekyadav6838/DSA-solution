#include<bits/stdc++.h>
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define int long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
string s;
cin>>s;
int n = s.length();
string ans="";
for(int i=0;i<n;i++)
{
    char c=s[i];
    c= toupper(c);
    if(c=='A'|| c=='E' || c=='I' || c=='O'| c=='U')
    {
        
    }
    else{
        
        ans.push_back('.');
        
        char v= tolower(s[i]);
        ans.push_back(v);
       
    }
}
cout<<ans<<endl;


    return 0;
}