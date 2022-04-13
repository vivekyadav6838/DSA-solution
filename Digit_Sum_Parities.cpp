#include <bits/stdc++.h> 
using namespace std; 
long long int solution() 
{ 
 long long int mm, n, i; 
    cin>>n; 
    long long int x=n+1, k; 
    long long int sumn=0, su=0; 
    long long int q=n; 
    long long int rem;
    while (n != 0) { 
      sumn = sumn + n % 10; 
      n = n / 10; 
     } 
 
    if(x > q) 
    { 
        long long int p = x; 
        while (p != 0) { 
      su = su + p % 10; 
      p = p / 10; 
      } 
         if((sumn % 2 == 0 && su % 2 != 0) || (sumn%2 != 0 && su%2 == 0)) 
         { 
             return x; 
         } 
         else 
         { 
              x++; 
         } 
    } 
    else 
     x++; 
    return x; 
} 
 
int main() 
{ 
    int gg,vv,kk=0;
   int t; 
   cin>>t; 
   while(t--) 
   { 
     cout<<solution()<<endl; 
   } 
    
   return 0; 
}