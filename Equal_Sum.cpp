#include<bits/stdc++.h>
/*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
string a; cin >> a;
  map<char, int> mapp;

  for (auto &ch : a)
  {
    mapp[ch]++;
  }

  int idx = -1;
  for (int i = 0; i < size(a); i++)
  {
    if (mapp[a[i]] > 1)
      mapp[a[i]]-- , idx = i;
    else break;
  }

  for (int i = idx + 1; i < size(a); i++)
    cout << a[i];
  cout << "\n";
    return 0;
}