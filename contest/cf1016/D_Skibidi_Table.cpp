#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
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

int getNumber(int p, int q, int l)
{
    if (p == 1 && q == 2)
        return 4;
    if (p == 2 && q == 1)
        return 3;
    if (p == 1 && q == 1)
        return 1;
    if (p == 2 && q == 2)
        return 2;

    int sz = (1LL << (l - 1));
    int k = sz * sz;

    if (p > sz && q > sz)
    {
        int dx = p - sz, dy = q - sz;
        return k + getNumber(dx, dy, l - 1);
    }
    else if (p > sz && q <= sz)
    {
        int dx = p - sz, dy = q;
        return (2 * k) + getNumber(dx, dy, l - 1);
    }
    else if (p <= sz && q > sz)
    {
        int dx = p, dy = q - sz;
        return (3 * k) + getNumber(dx, dy, l - 1);
    }
    else
    {
        return getNumber(p, q, l - 1);
    }
}

pair<int, int> v(int n, int m, int x, int y)
{
    if (n == 1)
    {

        if (m == 1)
        {
            return {x, y};
        }

        if (m == 2)
        {
            return {x + 1, y + 1};
        }

        if (m == 3)
        {
            return {x + 1, y};
        }

        if (m == 4)
        {
            return {x, y + 1};
        }
    }

    int sz = (1LL << (n - 1));
    int k = sz * sz;
    if (m > k && m <= (2 * k))
    {
        int b = m - k;

        return v(n - 1, b, x + sz, y + sz);
    }

    else if (m > 2 * k && m <= (3 * k))
    {
        int b = m - (2 * k);

        return v(n - 1, b, x + sz, y);
    }
    else if (m > 3 * k && m <= (4 * k))
    {
        int b = m - (k * 3);

        return v(n - 1, b, x, y + sz);
    }

    else
    {
        return v(n - 1, m, x, y);
    }
}
void solve()
{

    int n;
    cin >> n;

    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        if (s == "->")
        {
            int p, q;
            cin >> p >> q;
            int st = 1;

            cout << getNumber(p, q, n) << endl;
        }
        else
        {
            int m, st;
            cin >> m;
            st = 1;
            pair<int, int> p = v(n, m, 1, 1);

            cout << p.first << " " << p.second << endl;
        }
    }
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
