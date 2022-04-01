#include<bits/stdc++.h>
/*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
int n,m;
int c=0;
cin>>n>>m;
if(n==m){
    cout<<"0"<<endl;
    return 0;
}
else{
if(m%n==0){
    int r= m/n;
   while(r%2==0)
   r/=2,c++;
   while(r%3==0)
   r/=3,
   c++;
   if(r!=1)
   c--;
cout<<c<<endl;
return 0;

    
}}
cout<<"-1"<<endl;


    return 0;
}