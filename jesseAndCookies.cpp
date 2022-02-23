#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n ,k=0;
   cin>>n>>k;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   
   priority_queue<int,vector<int>,greater<int>> minheap;
   for(int i=0;i<n;i++)
   {
       minheap.push(arr[i]);
   }
   int count=0;
   for(int i=0;i<n;i++)
   {
       if(minheap.top()<k)
       {   int y=0;
           int x= minheap.top();
           minheap.pop();
           if(minheap.size()!=0)
           {
                y= minheap.top();
               minheap.pop();
           }
           else{
               cout<<"-1"<<endl;
               return 0;
           }
           count++;
           minheap.push(x+y);
           
       }
   }
   cout<<count -1<<endl;
   
  return 0;
}