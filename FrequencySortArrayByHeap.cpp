#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no of element in Array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter array element"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    unordered_map<int,int>hashmap;
    for(int i=0;i<n;i++)
    {
        hashmap[arr[i]]++;
    }
    cout<<"Here are the frequency of each element"<<endl;
    cout<<"Element:    Frequency"<<endl;
    for( auto i=hashmap.begin();i!=hashmap.end();i++)
    {
        cout<<i->first<<"         "<<i->second <<endl;
    }
     priority_queue<pair<int, int> > Maxheap;
     
    for( auto i=hashmap.begin();i!=hashmap.end();i++)
    {
        Maxheap.push({i->second,i->first});
    }
    cout<<"printing The element on the basis of their Frequeny"<<endl;
    while(Maxheap.size()>0)
    {
        int freq=Maxheap.top().first;
        int ele =Maxheap.top().second;
        for(int i=0;i<freq;i++)
        {
            cout<<ele<<" ";
        }
        Maxheap.pop();
    }

  //@vivekyadav 
}