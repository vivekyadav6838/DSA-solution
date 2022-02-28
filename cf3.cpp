#include<bits/stdc++.h>
using namespace std;
int main()
{
   int mat[5][5];
   int r,c;
   for(int i=0;i<5;i++)
   {
       for(int j=0;j<5;j++)
       {
           cin>>mat[i][j];
           if(mat[i][j]!=0)
           {
               r=i+1;
               c=j+1;
           }

       }
   }
   int count=0;
   if(r!=3)
   {
    count += abs(3-r);
   }
   if(c!=3)
   {
       count += abs(3-c);
   }
   cout<<count<<endl;
}