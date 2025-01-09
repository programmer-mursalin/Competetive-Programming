#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    char c;
    string s;

    cin >> n >> c >> s;

    // Check if all characters are already equal to c
    bool all_equal = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != c)
        {
            all_equal = false;
            break;
        }
    }

    // If all characters are already equal to c, no operations are needed
    if (all_equal)
    {
        cout << 0 << endl;
        return;
    }

    // Try to find a valid divisor
    vector<int> divisors;
    for (int i = 1; i <= n; i++)
    {
        bool valid = true;
        for (int j = i; j <= n; j += i)
        {
            if (s[j - 1] != c)
            {
                valid = false;
                break;
            }
        }
        if (valid)
        {
            cout << 1 << endl;
            cout << i << endl;
            return;
        }
    }

    // If no valid single divisor found, we need 2 operations
    cout << 1 << endl;
    cout << n << endl; // Any combination of large divisors can work
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
