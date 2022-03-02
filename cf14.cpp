#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    int k;
    cin>>n>>k;
    while(k)
    {
        if(n%10!=0)
        {
            n--;
            k--;
        }
        else{
            n=n/10;
            k--;
        }
    }
    cout<<n<<endl;
    return 0;
}