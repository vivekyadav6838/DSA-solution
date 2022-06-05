#include<bits/stdc++.h>
/*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
    int a=0,b=2,c=0;
    a= 2*(b++ + a++);
    c =2*(++b + --a);
    cout<<a <<" "<<b<<" "<<c<<endl;
    return 0;
}