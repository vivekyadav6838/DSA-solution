#include<bits/stdc++.h>
using namespace std;
void substring( string s,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int l=1;l<=n-i;l++)
        {
            cout<<s.substr(i,l)<<endl;
        }
    }

}
int main()
{
    system("cls");
    string s;
    cin>>s;
    substring(s,s.length());
}