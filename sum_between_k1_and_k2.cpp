// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
       priority_queue<long long int,vector<long long int>>maxheap1;
       priority_queue<long long int,vector<long long int>>maxheap2;
       for(int i=0;i<N;i++)
       {
           maxheap1.push(A[i]);
           if(maxheap1.size()>K1)
           maxheap1.pop();
       }
   long long     int first=maxheap1.top();
       for(int i=0;i<N;i++)
       {
            maxheap2.push(A[i]);
           if(maxheap2.size()>K2)
           maxheap2.pop();
           
       }
      long long  int second =maxheap2.top();
       long long int s=0;
       for(int i=0;i<N;i++)
       {
           if(A[i]> first && A[i]<second)
           s+=A[i];
       }
       return s;
       
        // Your code goes here
    }
};

// { Driver Code Starts.
int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n;
        long long a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        
        long long k1, k2;
        cin >> k1 >> k2;
        Solution ob;
        cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
        
    }
	return 0;
}