#include <bits/stdc++.h>
using namespace std;

#define int long long
#define gcd __gcd
#define ALL(x) (x).begin(), (x).end()
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define pm cout << "-1\n";
#define pz cout << "0\n";
#define cheakmate return;
const int N = 2e5 + 5;
#define Mod 1000000009 + 7

void solve()
{
    int l, r;
    cin >> l >> r;
    int mini = r - l + 1;

    for (int i = 0; i <= 18; i++)
    {
        int o = 1LL << (i + 1);
        int ones = (r / o) * (o / 2);
        int rem = r % o;
        ones += max(0LL, rem - (o / 2) + 1);

        int ones_l = ((l - 1) / o) * (o / 2);
        int rem_l = (l - 1) % o;
        ones_l += max(0LL, rem_l - (o / 2) + 1);

        int total_set = ones - ones_l;
        int total = r - l + 1;

        int zero_count = total - total_set;

        mini = min(mini, zero_count);
    }

    cout << mini << '\n';
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
  :::::::::::::Author : Md. Mursalin:::::::::::::
  ===============================================*/
