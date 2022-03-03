#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    string s;
    cin>>s;
    int n= s.size();
    if(n==1)
    cout<<s<<endl;
    else{
    int arr[n/2];
   // string s2;
    int k=0;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='+')
        {
            v.push_back(0);
        }
        else{
            v.push_back(int(s[i]));
        }
    }
    if(v[n-1]==0)
    {
        v.pop_back();
    }
    sort(v.begin(),v.end());
    string s2;
    for(int i=0;i<n;i++)
    {
        if(v[i]==0)
        {
            s2+='+';
        }
        else{
            s2+=char(v[i]);
        }
    }
    cout<<s2<<endl;
        

}

   
}

    
    
    
    