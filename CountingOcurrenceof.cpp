#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="ABC";
    int count[26]={0};
    for(int i=0;i<str.length();i++)
    {
        count[str[i]-'A']++;
    }
    for(int i=0;i<26;i++)
    {
        if(count[i]>0)
        {
        cout<<char(i + 'A
        ')<<" ";
        cout<<count[i]<<endl;
        }

    }
}