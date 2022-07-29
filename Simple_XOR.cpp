#include<bits/stdc++.h>
/*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){int x,y;cin>>x>>y;
int fc=0;
int count=0;
for(int i=x;i<=y;i++){
    int si=i;
    int qi=i+1;
    int pi=i+2;
    int ri = i+3;
    if((si^pi^qi^ri)==0 && ri<=y){
        fc=1;
        cout<<si<<" "<<qi<<" "<<pi<<" "<<ri<<endl;
        break;

    }
    else{
        count++;
        if(count>10)
        {
            break;
        }
    }
}
if(fc==0){
    cout<<"-1"<<endl;
}
}
    return 0;
}