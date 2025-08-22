#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
#define int long long
#define gcd __gcd

#define ALL(x) (x).begin(), (x).end()
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pz cout << "0\n";
#define pn cout << "NO\n";
#define cheakmate return;
const int N = 1e5 + 5;
#define Mod 1000000009 + 7

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> s(n), t(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n; i++)
        cin >> t[i];

    // Pair (ti, index) for greedy
    vector<pair<int, int>> cols;
    cols.reserve(n);
    for (int i = 0; i < n; i++)
        cols.push_back({t[i], i});

    sort(ALL(cols)); // sort by total flowers (smallest first)

    // Distribute seeds optimally
    for (auto [ti, idx] : cols)
    {
        int need = ti - s[idx];
        int add = min(m, need);
        s[idx] += add;
        m -= add;
        if (m == 0)
            break;
    }

    // Calculate average beauty
    long double total = 0;
    for (int i = 0; i < n; i++)
    {
        total += (long double)s[i] / t[i];
    }
    cout << fixed << setprecision(9) << (total / n) << "\n";
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
