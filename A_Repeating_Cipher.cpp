#include<bits/stdc++.h>
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define int long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
int n;
cin>>n;
string s;
cin>>s;
unordered_set<string>st;
st.insert(s[0]);
for(int i=1;i<s.length();i++){
    st.insert(s[i]);
}
string s1="";
set<int, greater<int> >::iterator itr;
for(itr = s1.begin();itr!=s1.end();itr)
{
    s1+= *itr;
}
cout<<s1<<endl;

    return 0;
}