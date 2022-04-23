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
    int x;
    cin>>x;
    if(x<=1399)
    {
        cout<<"Division 4"<<endl;
    }
    else if(x>=1400 && x<=1599){
        cout<<"Division 3"<<endl;
    }
    else if(x>=1600 && x<=1899){
        cout<<"Division 2"<<endl;
    }
    else if(x>=1900){
        cout<<"Division 1"<<endl;

    }

}
    return 0;
}