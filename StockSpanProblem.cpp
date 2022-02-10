#include<bits/stdc++.h>
using namespace std;


vector<int> stockSpan(int arr[],int n)
{
    stack<pair<int,int>> s;
    vector<int> indexarr;
    vector<int> span;
    for(int i=0;i<n;i++)
    {
        if(s.empty())
        {
            indexarr.push_back(-1);
        }
        else{
            indexarr.push_back(s.top().second);
        }
        while(!s.empty() && s.top().first<=arr[i])
        {
            s.pop();
        }
        s.push({arr[i],i});

    }
    for (int i=0;i<n;i++)
    {
        span.pop_back(i-indexarr[i]);
    }

return span;

}
int main()
{
    int n;
    cout<<"enter the arr size"<<endl;
    cin>>n;
    cout<<"enter array element"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    vector<int> ans = stockSpan(arr,n);
    for (int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<" i m herer";
    return 0;
}