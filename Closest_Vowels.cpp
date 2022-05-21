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
const int M=1e9 +7;
set<char>sp;
sp.insert('c');
sp.insert('g');
sp.insert('l');
sp.insert('r');
while(t--){
    int n=0;
    cin>>n;
    string s;
    cin>>s;
    int arr[99];
    int l=0;
    long long int count=1;
    for(char  g:s)
    {
        if(sp.find(g)!=sp.end())
        {
            count=(count*2)%M;
        }
    }
    cout<<count<<endl;
    

}
    return 0;
}