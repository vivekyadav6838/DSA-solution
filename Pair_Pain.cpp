#include <bits/stdc++.h>
/*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int co = 0, ct = 0, cz = 0;
        long long int res = 0;
        for (int i = 0; i < n; i++)
        {
            //   if(arr[i]==0)
            //   cz++;
            if (arr[i] == 1){
            
                co++;
            }
            if (arr[i] == 2)
                ct++;
        }
        res += (((ct) * (ct - 1) )/2);
        res+= co*(n-co);
        res+= (co*(co-1))/2;
        cout << res << endl;
    }
    return 0;
}