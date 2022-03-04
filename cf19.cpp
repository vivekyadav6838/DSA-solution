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
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='+')
            {
                arr.push_back(s[i]);
            }
        }
        sort(arr.begin(),arr.end());
        string s2;
        for(int i=0;i<arr.size();i++)
        {  
            s2+=char(arr[i]);
            if(i!=arr.size()-1)
            s2+='+';

        }
        cout<<s2<<endl;

    }
        

}

   


    
    
    
    