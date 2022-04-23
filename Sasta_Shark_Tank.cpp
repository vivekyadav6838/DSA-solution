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
    int x,y;
    cin>>x>>y;
    int xa= (x*100)/10;
    int ya = (y*100)/20;
    if(xa>ya)
    {
        cout<<"FIRST"<<endl;
    }
    else if(xa<ya)
    {
        cout<<"SECOND"<<endl;
    }
    else if(xa==ya){
        cout<<"ANY"<<endl;
    }
}
    return 0;
}