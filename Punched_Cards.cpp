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
int x=1;
while(t--){
    
    int r,c;
    cin>>r>>c;
    int nr=0,nc=0;
    if(r==c){
        nc=r*2+1;
        nr=nc;
    }
    else{
        nr=r*2+1;
        nc=c*2+1;
    }
    string arr[nr][nc];
    int i=0,j=0;
    for(i=0;i<nr;i++)
    {
        for(j=0;j<nc;j++)
        {
            if(i==0||i==1 && j==0||j==1)
            arr[i][j]='.';
             if(i==0 && j>1)
        {
            if(j%2==0)
            arr[i][j]='+';
            else
            arr[i][j]='-';
        }
        if(i==1 && j>1){
            if(j%2==0)
            {
                arr[i][j]='|';
            }
            else
            arr[i][j]='.';
        }
        if(i>1){
            if(j%2==0 && i%2==0)
            {
                arr[i][j]='+'; 
            }
            if(i%2==0 && j%2!=0)
            {
                arr[i][j]='-';
            }
            if(i%2!=0 && j%2!=0)
            {
                arr[i][j]='.';
            }
            if(i%2!=0 && j%2==0)
            {
                arr[i][j]='|';
            }
            
        }
       
        }
    }
        cout<<"Case #"<<x++<<":"<<endl;
        for( i=0;i<nr;i++)
        {
            for( j=0;j<nc;j++)
            {
              cout<<arr[i][j];
            }
            cout<<endl;
        }
    }

    return 0;
}