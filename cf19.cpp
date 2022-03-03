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
    string s2;
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]!='+'){
        arr[k]= int(s[i]);
        k++;
        }

    }
    sort(arr,arr+n);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<int(arr[i]);
    // }
    
    for(int i=0;i<=n/2;i++)
    {
        s2 +=char(arr[i]);
        if(i!=n/2)
        s2+='+';
        
        
    }
    
    
    cout<<s2<<endl;
    }

    
    
    
    }