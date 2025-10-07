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

    ll n, extras = 0, min_ops = 0, factorial = 1, res = 1;
    string s;
    cin >> s;
    vector<ll> v;
    n = (ll)s.size();
    for (ll i = 0; i < (n - 1); i++)
    {
        if (s[i] == s[i + 1])
        {
            extras++;
        }
        else
        {
            min_ops += extras;
            extras++;
            res = (res % Mod * extras % Mod) % Mod;
            extras = 0;
        }
    }
    if (extras != 0)
    {
        min_ops += extras;
        extras++;
        res = (res % Mod * extras % Mod) % Mod;
    }
    for (ll i = 1; i <= min_ops; i++)
    {
        factorial = ((factorial % Mod) * (i % Mod)) % Mod;
    }
    res = ((res % Mod) * (factorial % Mod)) % Mod;
    cout << min_ops << " " << res << endl;
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
