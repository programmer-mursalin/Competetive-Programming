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
#define Mod 1000000009 + 7

void solve()
{

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;

    if (2 * a[0] - a[1] < 0 || (2 * a[0] - a[1]) % (n + 1) != 0)
    {
        pn cheakmate
    }

    ll x2 = (2 * a[0] - a[1]) / (n + 1);
    ll x1 = a[0] - n * x2;

    if (x1 < 0)
    {
        pn cheakmate
    }

    bool pos = true;

    for (ll i = 1; i <= n; i++)
    {
        if (a[i - 1] - i * x1 - (n - i + 1) * x2 != 0)
            pos = false;
    }

    if (pos)
    {
        py
    }
    else
    {
        pn
    }
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
