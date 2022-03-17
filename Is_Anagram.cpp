#include<bits/stdc++.h>
using namespace std;
bool isAnagramNaive(string s1,string s2)

{
   int  n=s1.length();
    int m= s2.length();
    if(n!=m)
    {
        return false;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return s1==s2;

}
bool isAnagramOptimal(string s1,string s2)
{
    int  n=s1.length();
    int m  = s2.length();
    if(n!=m)
    {
        return false;
    }
    int count[256]={0};
    for(int i=0;i<s1.length();i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0;i<256;i++)
    {
        if(count[i]!=0){
            return false;
        }
    }
    return true;

}
int main()
{
    string s1,s2;
    s1="listen";
    s2="silent";
    cout<<"answer by Naive apporch"<<endl;
    cout<<isAnagramNaive(s1,s2)<<endl;
    cout<<"answer by optimal apporch"<<endl;
    cout<<isAnagramOptimal(s1,s2);

    return 0;
}