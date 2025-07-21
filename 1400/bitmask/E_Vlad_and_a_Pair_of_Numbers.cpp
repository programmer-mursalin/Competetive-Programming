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
    //   int n;
    // cin >> n;
    // vector< int> a(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    //}
    int n, c = 0, d = 0;
    cin >> n;
    set<int> v;
    for (int i = 0; i < 32; i++)
    {
        if ((n & (1LL << i)) != 0)
        {
            c |= ((1LL << i));
        }

        else
        {
            v.insert(2 * ((1LL << i)));
        }
    }
    // for (auto it : v)
    //     cout << it << " ";
    // cout << c << endl;
    int lagbe = (2 * n) - c;
    while (lagbe > 0)
    {
        int x = (int)log2(lagbe);
        int l = (1LL << (int)log2(lagbe));
        if (!v.count(l))
        {
            pm cheakmate
        }
        // c = c | (1 << x);
        // d = d | (1 << x);
        c |= l / 2, d |= l / 2;
        lagbe -= l;
        if (lagbe == 0)
            break;
    }
    cout << c << " " << d << endl;
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
