#include<bits/stdc++.h>
using namespace std;

bool is_power(int n)
{ 
    for(int i=0;i<=30;i++)
   {
       if(n==pow(2,i))
       {
           return true;
       
       }
   }
   return false;
}
int next_powerof2(int n)
 {
   int mnum=0;
      for(int i=0;i<30;i++)
       { 
             if(pow(2,i)<n)
           mnum=pow(2,i);
       }
           
       
       return mnum;
     
 }

int main()
{
   int t=0;
   cin>>t;

   while(t--)
   {
   int n;
   int m=0;
   cin>>n;
   int c=0;
   while(n!=1)
   {
       if(is_power(n))
       {
            c++;
           n=n/2;

          
       }
       else{
             c++;
          m= next_powerof2(n);
          n=n-m;
        


       }
   }
   if(c%2==0)
   cout<<"Richard"<<endl;
   else
   cout<<"Luvies"<<endl;
   }

   return 0;
   
}