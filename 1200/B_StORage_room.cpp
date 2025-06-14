#include <bits/stdc++.h>
using namespace std;

#define int long long
#define gcd __gcd

#define ALL(x) (x).begin(), (x).end()
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pz cout << "0\n";
#define pn cout << "NO\n";
#define checkmate return;

const int N = 1e5 + 5;
#define Mod 1000000007

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> d(n, vector<int>(n));
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> d[i][j];
        }
    }

    if (n == 1)
    {
        cout << "YES\n"
             << 0 << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
    {
        int m = 0;
        for (int j = 0; j < n; j++)
            m = max(m, d[j][i]);
        b[i] = m;
    }
    for (int i = 0; i < n; i++)
    {
        int mini = b[i];
        for (int j = 0; j < n; j++)
        {
            if (i != j)
                mini &= d[j][i];
        }

        // for (int j = 0; j < n; j++)
        // {
        //     if (i != j)
        //         mini &= d[i][j];
        // }

        a[i] = mini;
    }

    // for (auto it : a)
    //     cout << it << " ";
    // cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j && d[i][j] != 0)
            {
                pn checkmate
            }
            if ((a[i] | a[j]) != d[i][j] && i != j)
            {
                pn checkmate
            }
        }
    }

    cout << "YES\n";
    for (auto it : a)
        cout << it << " ";
    cout << '\n';
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
