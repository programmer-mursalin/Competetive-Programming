#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> mp;
    int dad = 0, olia = 0;
    bool ok = false;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];

        if (i & 1)
            olia += a[i];
        else
            dad += a[i];

        int diff = dad - olia;

        if (mp.count(diff))
        {
            ok = true;
        }

        if (dad == olia && dad != 0)
            ok = true;

        if (i < n - 1)
        {
            mp[diff] = 1;
        }
    }

    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
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
