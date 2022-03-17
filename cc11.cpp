#include <bits/stdc++.h>
#include<stdlib.h>

typedef long long int ll;
typedef unsigned int ui;
typedef unsigned long long int ul;
using namespace std;
int main()
{
    ui testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string tukka;
        tukka = s;
        sort(s.begin(), s.end());
        int jhanda = 0;
        for (int i = 0; i < n; i++)
        {
            if (tukka[i] != s[i])
            {
                char a = tukka[i];
                tukka[i] = tukka[n - 1 - i];
                tukka[n - 1 - i] = a;
            }
        }
        if (s == tukka)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}