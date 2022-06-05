#include<bits/stdc++.h>
// /*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
int j,m;
m=1;
int f=0;
int a[4]={2,4,2,2};
if(a[1]%3)
{
    a[1]=a[2];
    f=1;
}
else{
    a[2]=a[1]+2;
    f=1;
}
m = a[1]+a[2];
cout<<m<<endl;


    return 0;
}