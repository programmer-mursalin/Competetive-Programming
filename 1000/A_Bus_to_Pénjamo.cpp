/*
    "BISMILLAHIR RAHMANIR RAHIM"
    ("IN THE NAME OF ALLAH, THE MOST GRACIOUS AND THE MOST MERCIFUL")
    Md.Mursalin
    Department of Computer Science and Engineering
    Sheikh Hasina University, Netrokona, Bangladesh.
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, a, n) for (int i = a; i < n; i++)
#define g(i, a, n) for (int i = a; i >= n; i--)
#define all(x) x.begin(), x.end()
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {

        ans += (v[i] / 2) * 2;
    }
    int all = accumulate(v.begin(), v.end(), 0ll);

    int baki = all - ans;
    int r = ((2 * m) - ans) / 2;
    if (r < baki)
    {
        ans += (baki - (baki - r) * 2);
    }
    else
    {
        ans += baki;
    }
    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    f(case_num, 1, t + 1)
    {
        solve();
    }
    return 0;
}
