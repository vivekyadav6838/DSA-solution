#include<bits/stdc++.h>
using namespace std;

int main() {
    int t=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int p[n];
        p[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            p[i]=p[i-1]+arr[i];
        }
     int r = INT_MAX;
        long long int a=0;
        for(int i=0;i<n;i++)
        {
           long  long int baki= p[n-1] - p[i];
            if(abs(baki-p[i])<=r)
            {
                r =abs(baki - p[i]);
                
                a= max(p[i],r);
            }
        }
        cout<<a<<endl;
    }
	// your code goes here
	return 0;
}
