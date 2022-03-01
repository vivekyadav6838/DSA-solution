#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]!=0)
        {
            c++;
        }

    }
    if(c==0)
    {
        cout<<"EASY"<<endl;
    }
    else{
        cout<<"HARD"<<endl;
    }
}