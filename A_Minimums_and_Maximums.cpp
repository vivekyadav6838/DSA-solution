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
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;

        if (l1 >= l2 && l1 <= r2)

            cout << l1 << endl;

        else if (l2 >= l1 && l2 <= r1)

            cout << l2 << endl;

        else if (r1 >= l2 && r1 <= r2)

            cout << l2 << endl;

        else if (r2 >= l1 && r2 <= r1)
            cout << l1 << endl;
        else
            cout << l1 + l2 << endl;
    }

    return 0;
}