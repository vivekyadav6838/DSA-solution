#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n,v,b,c;
        int j,k,l,m;
        cin>>n>>v>>b;

        if(v == b)
        {
            cout<<"0\n";
        }
        else{

            if(v==1 ||b==1)
            {
                if(abs(v-b)==1 ||abs(v-b)==2)
                {
                    cout<<"1\n";
                }
                else{
                    cout<<"0\n";
                }
            }
            else{
                if(abs(v-b)==1 ||abs(v-b)==2)
                {
                    cout<<"2"<<endl;
                }
                else{
                    cout<<"0\n";
                }
            }
        
        }
    
    }
    return 0;
}