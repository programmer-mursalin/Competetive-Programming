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
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v(n);
    iota(v.begin(), v.end(), 1);
    if (s[0] == '0' && s[1] == '1')
    {
        pn cheakmate
    }
    if (s[n - 2] == '1' && s[n - 1] == '0')
    {
        pn cheakmate
    }

    for (int i = 0; i < n - 2; i++)
    {
        if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1')
        {
            pn cheakmate
        }
    }
    int curr = 0, ok = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            reverse(v.begin() + curr, v.begin() + i);
            ok = 0;
            curr = i;
        }
        else if (ok == 0)
        {
            curr = i;
            ok = 1;
        }
    }
    if (ok == 1)
    {
        reverse(v.begin() + curr, v.begin() + n);
    }
    py for (auto it : v)
            cout
        << it << " ";
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
