#include <bits/stdc++.h>
using namespace std;
#define int long long
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define cheakmate return;
const int N = 1e5 + 5;
#define Mod 1000000009 + 7

void solve()
{
    int x, y, z;
    cin >> x >> y >> z;
    if ((((x | y) & (x | z)) == x) && (((y | z) & (x | y)) == y) && ((((x | z) & (y | z))) == z))
        py else pn
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
