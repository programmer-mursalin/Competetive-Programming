#include <bits/stdc++.h>

using namespace std;

string l, r;

int ans(int idx, bool tightl, bool tightr)
{
    if (idx == l.size())
        return 0;

    char low = l[idx], high = r[idx];
    if (!tightl)
        low = '0';
    if (!tightr)
        high = '9';

    if (high > low + 1)
    {
        return 0;
    }
    if (high == low)
    {
        return (l[idx] == high) + (r[idx] == low) + ans(idx + 1, tightl, tightr);
    }
    else // high == low + 1
    {
        int ma = ans(idx + 1, tightl, false) + (l[idx] == low);
        ma = min(ma, ans(idx + 1, false, tightr) + (r[idx] == high));
        return ma;
    }
}

void solve()
{
    cin >> l >> r;
    cout << ans(0, true, true) << '\n';
}

int main()
{
#ifdef PRADY
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    clock_t T = clock();
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

#ifdef PRADY
    cout << "\nTime taken: " << ((float)(clock() - T)) / CLOCKS_PER_SEC << " seconds";
#endif
    return 0;
}