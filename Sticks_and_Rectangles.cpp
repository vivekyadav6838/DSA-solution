#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include<climits>
#include <regex>
#include <set>
#include <unordered_set>
#include <unordered_map>
#define fi first
#define se second
#define ll long long
#define all(v) v.begin(), v.end()
#define MAX 10000
#define w(t)  \
    int t;    \
    cin >> t; \
    for (ll i = 0; i < t; i++)
#define pb push_back
#define pp pop_back
#define pii pair<long long, long long>
#define vi vector<long long>
#define mii map<long long, long long>
#define qi queue<long long>
#define pqb priority_queue<long long>
#define pqs priority_queue<long long, vl, greater<long long>>
#define M 100000000
#define f(i, x) for (int i = 0; i < x; i++)
#define f1(i, x) for (int i = 1; i <= x; i++)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rep2(i, a, b) for (int i = a; i <= b; i++)
#define fastrun ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define ull unsigned long long
#define an "\n"
#define nl cout<<an
#define yes cout<<"YES"<<an
#define no cout<<"NO"<<an
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define gcd __gcd
#define db double
#define INF 1e18
#define F                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace std;

void solve()
{
    int m, n, i;
    cin>>n;
    int x=1, k, rem;
    int sumn=0, sumx=0;
    int q=n;
    while (n != 0) {
      sumn = sumn + n % 10;
      n = n / 10;
     }

    if(x > q)
    {
        int p = x;
        while (p != 0) {
      sumx = sumx + p % 10;
      p = p / 10;
      }
         if((sumn % 2 == 0 && sumx % 2 != 0) || (sumn%2 != 0 && sumx%2 == 0))
         {
             cout<<x<<endl;
         }
         else
         {
              x++;
         }
    }
    else
     x++;
}

int main()
{

   #ifndef ONLINE_JUDGE
 freopen("input1.txt", "r", stdin);
 freopen("output1.txt", "w", stdout);
   #endif

   fastrun

   int t;
   cin>>t;
   while(t--)
   {
      solve();
   }
   return 0;
}