#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
       long long  int d=0;
        cin>>d;
        if(d%2!=0)
        {
        cout<<"-1"<<endl;
        }
        else{
       long long  int px=d/2;
        {
         cout<<px<<" "<<"0"<<endl;
        }
        
        cout<<"-"<<px<<" "<<"0"<<endl;
        }
       long long  int py=d/2;
        cout<<"0"<<" "<<py<<endl;
       long long int ny=d/2;
        cout<<"0"<<" "<<"-"<<ny<<endl;
        

    }
   
}