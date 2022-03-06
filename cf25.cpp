#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
   string s;
   cin>>s;
   int n= s.size();
   int arr[n];
   for(int i=0;i<n;i++)
   {
       arr[i]=int(s[i]);

   }
   int f=0,si=0;
   for(int i=0;i<n;i++)
   {
       if(arr[i]==1)
       {
           f=i;
           break;
       }
   }
   for(int i=f+1;i<n;i++)
   {
    if(arr[i]==1)
    {
        si=i;
        break;
    }
   }
   cout<<si-f<<endl;
    }

}