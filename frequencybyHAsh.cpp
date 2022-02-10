#include<bits/stdc++.h>
using namespace std;
void printmap(int arr[],int n)
{
    unordered_map<int ,int>m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for(auto x:m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }

}
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"Now printing the occurance of the the number in the array "<<endl;
    printmap(arr,n);

}