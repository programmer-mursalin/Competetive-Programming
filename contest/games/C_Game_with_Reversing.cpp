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

    int n;
    cin >> n;
    string s, t, p;
    cin >> s >> t;
    p = t;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            c++;
        }
    }
    if (c == 1)
    {
        cout << 1 << endl;
        cheakmate
    }
    c = 0;

    int j = n - 1;

    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[j])
        {
            c++;

            s[i] = t[j];
        }
        j--;
    }

    if (c == 0)
    {
        cout << 0 << endl;
    }
    else if (s == t)
    {
        cout << (2 * c) - 1 << endl;
    }
    else if (s != t && n <= 2)
    {
        cout << (2 * c) - 1 << endl;
    }
    else
    {

        if (c == 0)
            c = 1;
        cout << 2 * c << endl;
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
