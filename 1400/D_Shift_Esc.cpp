#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
#define ll long long
#define gcd __gcd

#define ALL(x) (x).begin(), (x).end()
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pz cout << "0\n";
#define pn cout << "NO\n";
#define cheakmate return;
const int N = 105;
#define Mod 1000000009 + 7

int T = 1, n, m, p, a[N][N], f[N][N], s[N][N], t[N][N];
void solve()
{
    cin >> n >> m >> p;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
        for (int j = 1; j <= m; j++)
        {
            s[i][j] = s[i][j - 1] + a[i][j];
        }
        t[i][m + 1] = 0;
        for (int j = m; j; j--)
        {
            t[i][j] = t[i][j + 1] + a[i][j];
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            f[i][j] = 1e7;//
        }
    }
    f[0][1] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            for (int len = 1; j + len - 1 <= m; len++)
            {
                for (int l = 1; l <= m; l++)
                {
                    int r = l + len - 1;
                    if (r > m)
                        r -= m;
                    int val = (l >= j ? l - j : l + m - j);
                    if (l <= r)
                        f[i][j + len - 1] = min(f[i][j + len - 1], f[i - 1][j] + s[i][r] - s[i][l - 1] + val * p);
                    else
                        f[i][j + len - 1] = min(f[i][j + len - 1], f[i - 1][j] + t[i][l] + s[i][r] + val * p);
                }
            }
        }
    }
    cout << f[n][m] << '\n';
    // sort(ALL(a),greater<int>());
    // int maxi=*max_element(a.begin(),a.end());
    //  int maxi = distance(a.begin(), max_element(a.begin(), a.end()));   // return max index
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
