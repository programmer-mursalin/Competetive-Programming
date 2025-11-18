#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pn cout << "NO\n"
#define py cout << "YES\n"
#define pm cout << "-1\n"
#define pz cout << "0\n"

void solve()
{

    int n, m;
    cin >> n >> m;

    vector<vector<int>> d(n, vector<int>(m));

    int maxi_row = -1, maxi_col = -1;
    int p1 = -1, p2 = -1;

    for (int i = 0; i < n; i++)

    {
        int x = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> d[i][j];
            x ^= d[i][j];
        }
        if (x > maxi_row)
        {
            maxi_row = x;
            p1 = i;
        }
    }

    for (int j = 0; j < m; j++)
    {
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            x ^= d[i][j];
        }
        if (x > maxi_col)
        {
            maxi_col = x;
            p2 = j;
        }
    }

    map<int, int> mp1, mp2;

    for (int j = 0; j < m; j++)
    {
        if (j == p2)
            continue;
        for (int b = 0; b < 31; b++)
        {
            if ((d[p1][j] & (1LL << b)) != 0)
                mp1[b]++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i == p1)
            continue;
        for (int b = 0; b < 31; b++)
        {
            if ((d[i][p2] & (1LL << b)) != 0)
                mp2[b]++;
        }
    }

    int t = 0;
    for (int b = 0; b < 31; b++)
    {
        if ((mp1[b] & 1) || (mp2[b] & 1))
        {
            t |= (1LL << b);
        }
    }

    d[p1][p2] = t;

    long long ans = 0;

    for (int i = 0; i < n; i++)
    {
        int x = 0;
        for (int j = 0; j < m; j++)
            x ^= d[i][j];
        ans += x;
    }

    for (int j = 0; j < m; j++)
    {
        int x = 0;
        for (int i = 0; i < n; i++)
            x ^= d[i][j];
        ans += x;
    }

    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
