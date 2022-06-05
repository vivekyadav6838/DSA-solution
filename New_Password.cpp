#include<bits/stdc++.h>
// /*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
int t;
cin>>t;
int tp=0;
while(t--){
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cps=0;
    int sml=0;
    int spl=0;
    int digi=0;
    for(int i=0;i<n;i++)
    {
        if(isupper(s[i]))
        cps++;
        if(islower(s[i]))
        sml++;
        if(s[i]=='@'|| s[i]=='&'||s[i]=='#'|| s[i]=='*')
        spl++;
        if(isdigit(s[i]))
        digi++;


    }
    if(cps==0)
    s+='A';
    if(sml==0)
    s+='a';
    if(digi==0)
    s+='1';
    
    if(spl==0)
    s+='@';
    while(s.length()<7)
    {
         s+='A';
         if(s.length()==7)
         break;

          s+='1';
          if(s.length()==7)
         break;
           s+='*';
           if(s.length()==7)
         break;
           s+='a';
           if(s.length()==7)
         break;

    }

    tp++;
    cout<<"Case #"<<tp<<": "<<s<<endl;
    


}
    return 0;
}