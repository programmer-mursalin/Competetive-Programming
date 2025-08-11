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

void solve()
{

    // 2d input
    // vector<vector< int>> d(n, vector< int>(m));
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n), c, d;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    multiset<int> ms1(ALL(a));
    multiset<int> ms2(ALL(b));
    if (k == 0)
    {
        if (ms1 == ms2)
            py else pn cheakmate
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] % k < 0)
            c.push_back(min(k - (a[i] % k) + k, (a[i] % k) + k));
        else
            c.push_back(min(a[i] % k, k - (a[i] % k)));
    }
    for (int i = 0; i < n; i++)
    {
        if (b[i] % k < 0)
            d.push_back(min(k - (b[i] % k) + k, (b[i] % k) + k));
        else
            d.push_back(min(b[i] % k, k - (b[i] % k)));
    }
    sort(ALL(c));
    sort(ALL(d));
    if (c == d)
        py else pn
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
