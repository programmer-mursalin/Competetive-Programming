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

    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if (((a & 1) && (b < a - 1)) || ((a % 2 == 0) && b < a))
    {
        pm
            cheakmate;
    }
    if (a - 1 == b && a % 2 == 1)
    {
        cout << y << endl;
    }
    else if (a == b)
    {
        cout << 0 << endl;
    }
    else if (x > y)
    {
        int c = 0;
        for (int i = a; i < b; i++)
        {
            if (i % 2 == 0)
                c++;
        }
        int d = (b - a) - c;
        cout << (c * y) + (d * x) << endl;
        ;
    }
    else
    {
        cout << (b - a) * x << endl;
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
