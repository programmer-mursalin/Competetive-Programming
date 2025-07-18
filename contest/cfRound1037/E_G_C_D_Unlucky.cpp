#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> p(n), s(n);

        for (int i = 0; i < n; i++)
            cin >> p[i];
        for (int i = 0; i < n; i++)
            cin >> s[i];

        bool ok = true;

        // p non-increasing চেক (p[i] ≤ p[i-1])
        for (int i = 1; i < n; i++)
        {
            if (p[i] > p[i - 1])
            {
                ok = false;
                break;
            }
        }

        // s non-decreasing চেক (s[i] ≥ s[i+1])
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] < s[i + 1])
            {
                ok = false;
                break;
            }
        }

        // p[n-1] == s[0]
        if (p[n - 1] != s[0])
            ok = false;

        cout << (ok ? "YES\n" : "NO\n");
    }

    return 0;
}
