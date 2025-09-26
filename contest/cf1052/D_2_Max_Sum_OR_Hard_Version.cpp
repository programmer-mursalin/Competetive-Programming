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

int pow_log2(int n)
{
    return 1 << (31 - __builtin_clz(n));
}

void solve()
{
    int l, r;
    cin >> l >> r;
    vector<int> ans(r - l + 1);
    map<int, int> pos;
    for (int p = 0, i = l; i <= r; i++, p++)
    {
        ans[p] = i;
        pos[i] = p;
    }

    vector<bool> done(r - l + 1, false);
    for (int j = 2 * pow_log2(r); j >= 1; j /= 2)
    {
        for (int i = r; i >= l; i--)
        {
            if (done[pos[i]])
                continue;
            int x = j - 1;
            int comp = x ^ i;
            if (comp < l || comp > r || done[pos[comp]])
                continue;
            done[pos[i]] = done[pos[comp]] = true;
            swap(pos[i], pos[comp]);
            swap(ans[pos[i]], ans[pos[comp]]);
        }
    }

    long long anss = 0;
    for (int p = 0, i = l; i <= r; i++, p++)
    {
        anss += (ans[p] | i);
    }

    cout << anss << "\n";
    for (auto &x : ans)
        cout << x << " ";
    cout << "\n";
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

/*===============================================
  :::::::::::::Author :Md.Mursalin:::::::::::::
  ===============================================*/
