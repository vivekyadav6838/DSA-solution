#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n, k, l, c, d, p, nl, np;
   cin>>n>>k>>l>>c>>d>>p>>nl>>np;
   int tl= c*d;
   int td =k*l;
   int a=td/(n*nl);
   int b= p/(n*np);
   int v= tl/n;
   int r = min(a,min(b,v));
   cout<<r;


}