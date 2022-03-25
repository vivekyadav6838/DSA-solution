int solve(int n, string s, int c[])
{
    int result1 = 0, r2 = 0, f = 0;
    for (int i = 0; i < n / 2; i += 2)
    {
        result1 = 0, r2 = 0;
        string a1 = s.substr(i, 2);
        string b1 = s.substr(n - i - 2, 2);
        if (a1[0] == b1[0] && a1[1] == b1[1])
            continue;
        else if (a1[0] == b1[0])
            result1 += min(c[i + 1], c[n - i - 1]);
        else if (a1[1] == b1[1])
            result1 += min(c[i], c[n - i - 2]);
        else
        {
            result1 += min(c[i + 1], c[n - i - 1]);
            result1 += min(c[i], c[n - i - 2]);
        }
        if (a1[0] == b1[1] && a1[1] == b1[0])
            continue;
        else if (a1[0] == b1[1])
            r2 += min(c[i + 1], c[n - i - 2]);
        else if (a1[1] == b1[0])
            r2 += min(c[i], c[n - i - 1]);
        else
        {
            r2 += min(c[i + 1], c[n - i - 2]);
            r2 += min(c[i], c[n - i - 1]);
        }
        f += min(result1, r2);
    }

    return f;
}
}
;