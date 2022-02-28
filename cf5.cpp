#include<bits/stdc++.h>
using namespace std;
int main()
{
   int x,y,z;
   cin>>x>>y>>z;
   int ad = abs(x-y) + abs(x-z);
   int bd = abs(y-x) + abs(y-z);
   int cd = abs(z-x) + abs(z-y);
   cout<<min(ad,min(bd,cd));


}