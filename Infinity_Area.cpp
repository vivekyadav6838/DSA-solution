#include<bits/stdc++.h>
// /*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
 #define ll long long int
// #define arr(n) int arr[n]

using namespace std;
int main()
{
int t;
cin>>t;
    int c=1;

while(t--){
    double r,a,b;
    cin>>r>>a>>b;
    double sum=0.0;

    long long int radius =r;

   // sum+= 3.14 *(pow(r,2));
    int tt=1;
   
    while(radius>0){
        sum+= (22.0/7.0)*(radius*radius);
        if(tt%2==0)
        {
            radius=((radius/b));
        }
        else{
            radius=radius*a;
        }
        tt++;
        
        
        
 
 
    }
cout<<"Case #"<<c<<":"<<" "<<fixed<< setprecision(6)<<sum<<endl;
c++;
}
return 0;
}


    
  
