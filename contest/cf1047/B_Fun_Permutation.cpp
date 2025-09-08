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
    int n, b;
    cin >> n >> b;
    int maxi = INT_MIN;
    vector<int> d;
    for (int i = 0; i <= b; i++)
    {
        int pow2 = 1;
        for (int k = 0; k < i; k++)
            pow2 *= 2;
        for (int j = 0; j <= b; j++)
        {
            int pow5 = 1;
            for (int k = 0; k < j; k++)
                pow5 *= 5;
            d.push_back(pow2 * pow5);
        }
    }
    sort(ALL(d));

    for (int i = 0; i < d.size(); i++)
    {
        int p = (d[i] * n) + (b / d[i]);
        if (p % 2 == 0 && p > maxi)
        {
            maxi = p;
        }
    }
    if (maxi == INT_MIN)
        pm else cout << maxi << endl;
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
