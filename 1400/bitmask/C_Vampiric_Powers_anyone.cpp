#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    int ans = 0, xr = 0;
    vector<int> visited(256, 0);
    visited[0] = 1; // prefix xor 0 already seen

    for (int i = 0; i < n; i++)
    {
        xr ^= a[i];

        for (int j = 0; j < 256; j++)
        {
            if (visited[j])
                ans = max(ans, xr ^ j);
        }

        visited[xr] = 1;
    }

    cout << ans << '\n';
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
