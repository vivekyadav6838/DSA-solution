#include<bits/stdc++.h>
/*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    if(s.length()<=1){
        cout<<"NO"<<endl;
        return 0;
        
    }
    
        int c=1;
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1])
            c++;
            else{
                if(c<2){
                    cout<<"NO"<<endl;
                    break;
                   
                }
                c=1;
            }
        }
        // if(c<2)
        // cout<<"NO"<<endl;
        // else
        cout<<"YES"<<endl;

    
}
    return 0;
}