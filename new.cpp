#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

 
// Ordered Set Tree
typedef tree<pair<int,int>, null_type, less_equal<pair<int,int>>,
             rb_tree_tag,
             tree_order_statistics_node_update>
    PBDS;
int main()
{
    int n;
    cin>>n;
   int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
   int c[n];
    for(int i=0;i<n;i++)
    {
        c[i]=a[i]-b[i];
    }
    PBDS st;
  long long   int count=0;
    for(int i=0;i<n;i++)
    {
count += st.size() - st.order_of_key({-c[i],10000000});
   st.insert({c[i],i});
    }
    cout<<count;
}