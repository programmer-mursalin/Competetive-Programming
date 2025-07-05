#include <bits/stdc++.h>
using namespace std;
#define int long long
#define gcd __gcd

#define ALL(x) (x).begin(), (x).end()
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pz cout << "0\n";
#define pn cout << "NO\n";
#define cheakmate return;
const int N = 1e5 + 5;
#define Mod 1000000007

void solve()
{
    int n, l, r, k;
    cin >> n >> l >> r >> k;

    if (n == 2)
    {
        pm cheakmate
    }

    if (n & 1)
    {
        cout << l << endl;
        cheakmate
    }

    int pos = -1;
    for (int i = 63; i >= 0; i--)
    {
        if ((l & (1LL << i)) != 0)
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
    {
        pm cheakmate
    }
    if ((1LL << (pos + 1)) <= r)
    {

        // cout << (1LL << (pos + 1)) << endl;
        // cheakmate
        if (k <= (n - 2))
        {
            cout << l << endl;
            cheakmate
        }
        else
        {
            cout << (1LL << (pos + 1)) << endl;
            cheakmate
        }
    }

    pm
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
  :::::::::::::Author : Md.Mursalin:::::::::::::
  ===============================================*/
