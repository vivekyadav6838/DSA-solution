#include<bits/stdc++.h>
/*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
    int grid[3][3];
    int n=3,m=3;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>grid[i][j];

        }
    }
    
    int k;
    cin>>k;
    int grids[3][3];
    
 while(k--)
        {
            for(int i=0;i<3;i++)
            {
                for(int j=1;j<3;j++)
                {
                    if(i==2 && j==2)
                     break;
                     grids[i][j]=grid[i][j-1];
                }
            }
            grids[0][0]=grid[2][2];
    grids[2][2]=grid[0][0];
            
        }
        


  for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           
            cout<<grids[i][j]<<" ";

        }
        cout<<endl;
    }
       

    return 0;
}