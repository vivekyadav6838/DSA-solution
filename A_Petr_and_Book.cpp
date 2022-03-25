#include<bits/stdc++.h>
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define pi 3.14
// #define arr(n) int arr[n]
using namespace std;
int main()
{
int n;
cin>>n;
int arr[7]={0};
for(int i =0;i<7;i++)
{
    cin>>arr[i];
}

int i=0;
while(n>0){
    n-=arr[i];
    if(n<=0)
    break;
    i++;
    i=i%7;
    
    
    
}
cout<<i+1<<endl;

    return 0;
}