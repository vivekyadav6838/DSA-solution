#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int s=0;
    cin>>s;
   // int n=s;
    vector<int> arr(s);
    for(int i=0;i<s;i++)
    {
        cin>>arr[i];
    }
    
    int count=0;
    int k,kv,l,lv=0;
    int n =s;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]<arr[i+1])
        {
            k=i;
            kv=arr[i];
            count++;
            break;

        }
    }
    if(count==0)
    {
        reverse(arr.begin(),arr.end());
    }
    else{

        for(int i=n;i>=0;i--)
        {
            if(arr[k]<arr[i])
            {
                l=i;
                lv=arr[i];
                break;
            }
        }
        swap(arr[k],arr[l]);
        reverse(arr.begin()+k+1,arr.end());
       
        cout<<s<<endl;
    }


    
}