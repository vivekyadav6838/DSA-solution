#include<bits/stdc++.h>
// /*** @author Vivek Yadav ***/
// #define for(i,size) for (int i = 0; i < size; ++i)
// #define ll long long int
// #define arr(size) int arr[size]
using namespace std;


int main() {
	
	int t; cin>>t; 
	while(t--){
	   long long int size;;
       long long int x,y,i;
       long long int cnt=0;
	   cin>>size;
	   int arr[size];
       int v=0;
       double d=0;
	   for(i=0;i<size;i++){
	       cin>>arr[i];
           
	       if(arr[i-1]>arr[i] && i>=1){
	           swap(arr[i-1],arr[i]);
	           if(arr[i-2]>arr[i-1] && i>=2){
	               cnt+=2;
                   v++;

	           }else if(arr[i-2]<arr[i-1] && i>=2){
	               cnt+=1;
                   v--;
	           }
	           else if(i==1){
	               cnt+=1;
                   v++;
	           }else{
	                 cnt+=1;
                     v+=199;
	           }
	       }
	   }
	   if(cnt<2){
	       cout<<"YES"<<endl;
	   }else{
	       cout<<"NO"<<endl;
	   }
	}
	return 0;
}