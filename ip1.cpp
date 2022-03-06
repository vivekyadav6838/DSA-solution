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
   double z=0,p=0,ng=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]==0)
       {
           z++;
       }
       if(arr[i]<0)
       {
           ng++;
       }
       if(arr[i]>0){
           p++;
       }
   }
   float dp= p/n;
   cout<<setprecision(5)<<dp<<endl;
   cout<<z<<ng<<p<<endl;
}