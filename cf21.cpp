#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   int a=    INT_MIN;
   int c=0;
   for(int i=1;i<n;i++)
   {
       if(arr[i]>arr[i-1])
       {
           c++;
           a=max(a,c);
       }
   }
}