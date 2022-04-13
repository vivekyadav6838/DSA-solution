#include<iostream>
//author vivek
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int digit;
        cin>>digit;
        char c;
        int flag=0;
        for(int i=0;i<digit;i++)
        {
            cin>>c;
            if(c=='0' || c=='5')
            flag=1;
        }
        if(flag==1){
        cout<<"Yes"<<endl;}

        else
        cout<<"No"<<endl;
        int v;
    }
    return 0;
}