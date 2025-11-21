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

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    map<int, int> mp, m, mp1;

    for (int i = 0; i < 31; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] & (1LL << i))
                mp[i]++;
        }
    }

    for (int i = 0; i < 31; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (b[j] & (1LL << i))
                m[i]++;
        }
    }

    int ok = 1;
    for (int i = 0; i < 31; i++)
    {
        if (mp[i] % 2 != m[i] % 2)
            ok = 0;
    }

    if (ok)
    {
        cout << "Tie\n";
        cheakmate
    }

    for (int i = 0; i < 31; i++)
    {
        mp1[i] = 0;
        for (int j = 0; j < n; j++)
        {
            if ((a[j] & (1LL << i)) != (b[j] & (1LL << i)))
            {
                mp1[i] = j + 1;
                        }
        }
    }

    int Ajisai = 0, Mai = 0;

    for (int i = 0; i < 31; i++)
    {
        if (mp1[i] == 0)
            continue;

        if (mp[i] % 2 != m[i] % 2)
        {

            if (mp1[i] & 1)
                Ajisai |= (1LL << i);
            else
                Mai |= (1LL << i);
        }
    }

    if (Ajisai > Mai)
        cout << "Ajisai\n";
    else
        cout << "Mai\n";
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

/*===============================================
  :::::::::::::Author :Md.Mursalin:::::::::::::
  ===============================================*/
