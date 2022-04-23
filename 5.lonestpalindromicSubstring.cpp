#include <bits/stdc++.h>
/*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    char ns[2 * n + 1];
    int p[2 * n + 1];
    int j = 0;
    ns[j + 1] = "#";
    for (int i = 0; i < n; i++)
    {
        ns[j++] = s[i];
        ns[j++] = "#";
    }
    ns[j] = "#";
    int c = 0, r = 0, lc = 0, m;
    for (int i = 0; i < ns.length(); i++)
    {
        m = 2 * c - i;
        if (r > i)
        {
        }
    }

    return 0;
}