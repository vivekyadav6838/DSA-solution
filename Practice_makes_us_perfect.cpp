#include<bits/stdc++.h>
/*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{

    int w,x,y,z;
    int count=0;
    cin>>w>>x>>y>>z;
    if(w>=10)
    count++;
    if(x>=10)
    count++;
    if(y>=10)
    count++;
    if(z>=10)
    count++;
    cout<<count<<endl;

    return 0;
}