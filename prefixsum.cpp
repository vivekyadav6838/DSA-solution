#include <bits/stdc++.h>
/*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int pre[n] = {0};
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        
        {
            pre[i] = arr[0];
        }
        else
        {
            pre[i] = pre[i - 1] + arr[i];
        }
    }
    int q, ans;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (l == 0)
            ans = pre[r];
        else
            ans = pre[r] - pre[l - 1];
        cout << ans << endl;
    }
    return 0;
}