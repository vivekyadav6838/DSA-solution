// #include<bits/stdc++.h>
// // #define for(i,n) for (int i = 0; i < n; ++i)
// // #define int long long int
// // #define arr(n) int arr[n]
// using namespace std;
// int main()
// {
// // int t;
// // cin>>t;
// // while(t--){}
// string s,t;
// cin>>s>>t;
// int n=s.length();
// int m= t.length();
// if(m>n )
// {
//     cout<<""<<endl;
// }
// int l,r,des=0;
// int ans[]={-1,0,0};
// unordered_map<char,int>m1;
// for(int i=0;i<m;i++)
// {
//     m1[t[i]]++;
    
// }
// unordered_map<char,int>m2;
// for(int i=0;i<n;i++)
// {
//     m2[s[i]]++;
// }
// while(r<s.length())
// {
    
// }
// //
//  for(auto x:m2)
//     {
//         cout<<x.first<<" "<<x.second<<endl;
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
       cin>>a[i];
  }
  
  long long prefSum[n];
  prefSum[0] = a[0];
  for (int i = 1; i < n; i++)
{
   prefSum[i] = prefSum[i - 1] + a[i];
}

int t=0,j=0,k=0;
long long antar=INT_MAX;
for(int i=0;i<n;i++)
{
    long long l=prefSum[i];
    long long r=prefSum[n-1]-l;
    if(abs(r-l)<antar){
        j=i;
        antar=abs(r-l);
    }
}


        antar = INT_MAX;
        for (int i = 0; i < j; i++) {
            long long l = prefSum[i];
            long long r = prefSum[j] - l;
            if (abs(r - l) < antar) {
                t = i;
                antar = abs(r - l);
            }
        }

        antar = INT_MAX;
        for(int i = j + 1; i < n - 1; i++) {
            long long l = prefSum[i] - prefSum[j];
            long long r = prefSum[n - 1] - prefSum[j] - l;
            if (abs(r - l) < antar) {
                k = i;
                antar = abs(r - l);
            }
        }
   int l[]={0, t+1, j+1, k+1, n };
   vector<int>al;
    for (int i = 1; i < 5; i++) {
            long sum = 0;
            for (int i1 = l[i - 1]; i1 < l[i]; i1++) {
                sum += a[i1];
            }
        al.push_back(sum);
    }
    sort(al.begin(),al.end());
    cout<<(al[3]-al[0])<<endl;      
  
}



