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
const int N = 1e5 + 5;
#define Mod 998244353

void solve()
{
    auto binpow = [](ll a, ll b, ll mod) -> ll
    {
        ll res = 1;
        while (b > 0)
        {
            if (b & 1)
                res = res * a % mod;
            a = a * a % mod;
            b >>= 1;
        }
        return res;
    };

    // 2d input
    // vector<vector< int>> d(n, vector< int>(m));
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    unordered_map<int, int> mp1, mp2;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        a[i] = m;
        mp1[m] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        int q;
        cin >> q;
        b[i] = q;
        mp2[q] = i + 1;
    }

    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxi)
        {
            c[i] = a[i];
            maxi = a[i];
        }

        if (b[i] > maxi)
        {
            c[i] = b[i];
            maxi = b[i];
        }
        c[i] = maxi;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << c[i] << " ";
    // }
    for (int i = 0; i < n; i++)
    {
        int x1 = -1, y1 = -1, ans = (1 << c[i]) % Mod;
        ans = binpow(2, c[i], Mod);

        if (mp1[c[i]] > 0 && (mp1[c[i]] - 1 <= i))
        {
            x1 = ((i + 1) - (mp1[c[i]]));
        }
        if (mp2[c[i]] > 0 && (mp2[c[i]] - 1 <= i))
        {
            y1 = ((i + 1) - (mp2[c[i]]));
        }
        int res = 0, val1 = 0, val2 = 0;
        if (x1 >= 0)
        {

            val2 = b[x1];
            // int result = max(val1, val2);
            // ans += (1 << result) % Mod;
        }

        if (y1 >= 0)
        {
            val1 = a[y1];
        }
        res = max(val1, val2);
        ans = (ans + binpow(2, res, Mod)) % Mod;

        cout << ans << " ";
    }

    cout << endl;
}
// sort(ALL(a),greater<int>());
// int maxi=*max_element(a.begin(),a.end());
//  int maxi = distance(a.begin(), max_element(a.begin(), a.end()));   // return max index

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
