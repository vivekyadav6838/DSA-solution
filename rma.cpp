#include<bits/stdc++.h>
using namespace std;
int traffic(int n,int t,int D[],int V[])
{
    vector<int>lst;
    vector<int>neww;
    int cur=0;
    int count=0;

    for(int i =0;i<n;i++)
    {
      lst.push_back(D[i] + V[i]*t);
    }
    for(int i =0;i<n;i++)
    {
   neww.push_back(lst[i]-D[i]);
    }
    for(int i=0;i<n;i++)
    {
     cur=neww[i];
for(int j =i+1;j<n;j++){
    if(cur>neww[j])
    {
        count++;
    }
}
    }
    return count;

}
int main()
{
   int n,t;
   cin>>n>>t;
  int D[n];
  int V[n];
   for(int i=0;i<n;i++)
   {
       cin>>D[i];
   }
   for(int i=0;i<n;i++)
   {
       cin>>V[i];
   }
}