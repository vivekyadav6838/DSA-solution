
#include<bits/stdc++.h>
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define int long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
int n=0,k=0;
int c=0;
cin>>n>>k;
priority_queue <int, vector<int>, greater<int> > minheap;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    minheap.push(x);
    
}
//cout<<minheap.top()<<endl;


while(minheap.top()<k)
{
    int a=0;
    
     a = minheap.top();
     int b=0;
     minheap.pop();
     b=minheap.top();
         minheap.pop();
         minheap.push(a+(2*b));
          c++;
     
}
cout<<minheap.top()<<endl;
// int arr[n];
// int i=0;
// while(!minheap.empty())
// {
//     arr[i++]=minheap.top();
//     minheap.pop();
//     // if(arr[i]<k)
//     // {
//     //     cout<<"-1"<<endl;
//     //     break;
//     // }
// }
if(minheap.top()<k)
{
    cout<<"-1"<<endl;
}
else
cout<<c<<endl;

    return 0;
}