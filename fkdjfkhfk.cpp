#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;
        set<string> result ;
 
    // List All Substrings
    for (int i = 0; i <= s.length(); i++)
    {
        for (int j = 1; j <= s.length()-i; j++)
        {
 
            // Add each substring in Set
            result.insert(s.substr(i, j));
        }
    }
    cout<<result.size()-s.length()<<endl;
    }
    return 0;
    }

        
       
        

    