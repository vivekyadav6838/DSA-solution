#include<bits/stdc++.h>
using namespace std;
long long int mergeSort(int arr[],int l,int r)
{
    long long iv=0;
    if(l<r)
    {
        int mid= (l+r)/2;
       iv+= mergeSort(arr,0,mid);
       iv+= mergeSort(arr,mid+1,r);
      iv+=  merge(arr,l,mid,r);

    }











    return iv;

}
int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cout<<mergeSort(arr,0,n-1);
}