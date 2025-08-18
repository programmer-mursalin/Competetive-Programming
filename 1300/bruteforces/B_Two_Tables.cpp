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
#define Mod 1000000009 + 7

void solve()
{
    int n, m, a, b, c, d, k, l;
    cin >> n >> m >> a >> b >> c >> d >> k >> l;

    int leftGap = a;
    int rightGap = n - c;
    int bottomGap = b;
    int topGap = m - d;

    int free_width = leftGap + rightGap;
    int free_height = bottomGap + topGap;

   
    if (free_width < k && free_height < l)
    {
        pm cheakmate
    }

    double ans1 = 1e18, ans2 = 1e18;

   
    if (max(leftGap, rightGap) >= k)
        ans1 = 0;
    else if (leftGap + rightGap >= k)
        ans1 = k - max(leftGap, rightGap);

 
    if (max(bottomGap, topGap) >= l)
        ans2 = 0;
    else if (bottomGap + topGap >= l)
        ans2 = l - max(bottomGap, topGap);

    double ans = min(ans1, ans2);

    if (ans >= 1e18)
    {
        pm cheakmate
    }

    cout << fixed << setprecision(9) << ans << "\n";
    cheakmate
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

/*===============================================
  :::::::::::::Author : Md.Mursalin ::::::::::::::
  ===============================================*/
