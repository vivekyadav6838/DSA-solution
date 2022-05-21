#include<bits/stdc++.h>
/*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;


int main() {
  int t;
  cin>>t;
  while(t--){
      int sz;
      cin>>sz;
      bool g=true;
      vector<int> a(sz), b(sz);
      for(int &x: a) cin>>x;
      int ab=0;
      for(int &x: b) cin>>x;
      int arr[sz];
      int brr[sz];
      for(int i=0;i<5;i++)
      {
          arr[i]=i;
      }
      map<pair<int,int>,int> pairss;
      long long  int res = 0;

      for(int i=0;i<sz;i++){
          res += pairss[{a[i],b[i]}];
          pairss[{b[i],a[i]}]++;
      }
      cout<<res<<endl;
  }
  return 0;
}