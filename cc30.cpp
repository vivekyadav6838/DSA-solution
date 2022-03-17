#include <bits/stdc++.h>
using namespace std;


 main(){
    int t;
    
    cin>>t;
    while(t--){
    int n,k;
   cin>>n>>k;
   
   int array[n];
   
   for(int i=0;i<n;i++)
   {
   cin>>array[i];
   }
    
   sort(array,array+n);
   int cost = k;
   int li = -1;
   int count = 0;
   
   for(int i=0;i<n;i++){
       if (cost>=array[i]){
           cost-=array[i];
           count+=1;
       }
       else{
           if (cost>=((array[i]+1)/2)){
               count+=1;
               break;
           }
       }
   }
   
   cout<<count<<endl;
 }
}