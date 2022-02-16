#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    int gap= ceil(m+n/2);
    
    while(gap!=1)
    {
        for(int i=0;i<n;i++)
        {  if(i+gap>n-1){
            if((i+gap)%(n-1)>m-1)
            {
              continue;
            }
            else{
                      if(arr1[i]>arr2[(i+gap)%(n-1)])
                         {
                         swap(arr1[i],arr2[(i+gap)%(n-1)]);
                       }
          else{
            if(arr1[i]>arr1[i+gap])
            swap(arr1[i],arr1[i+gap]);
          }}
        }
        }
        gap=ceil(gap/2);
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<m;i++)
    {
        cout<<arr2[i]<<" ";
    }


}