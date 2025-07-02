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
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxi = INT_MIN, mini = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < mini)
        {
            b[i] = a[i];
            mini = a[i];
        }
        else
        {
            b[i] = mini;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > maxi)
        {
            c[i] = a[i];
            maxi = a[i];
        }
        else
        {
            c[i] = maxi;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i] || a[i] == c[i])
            cout << 1;
        else
            cout << 0;
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
