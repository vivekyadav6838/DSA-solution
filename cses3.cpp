#include<bits/stdc++.h>
using namespace std;
 long long int minimove(long long int arr[],int n)
{
    long long int count=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]>arr[i])
        {
       count+=(arr[i-1]-arr[i]);
        arr[i]=(arr[i-1]-arr[i])+arr[i];
        }
    }
    return count;
}
int main()
{
    long long int n;
    cin>>n;
   long long  int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<minimove(arr,n)<<endl;;

    return 0;
}