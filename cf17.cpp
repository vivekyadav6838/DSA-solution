#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int c=0;
    set<char>S;
    for(int i=0;i<n;i++)
    {
        S.insert(s[i]);
    }
    if(S.size()%2==1)
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }
}