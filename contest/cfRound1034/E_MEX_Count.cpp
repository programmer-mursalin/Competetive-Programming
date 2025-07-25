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

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }

    map<int, int> freq;
    int mex = 0;
    for (auto &[x, y] : mp)
    {
        if (x == mex)
        {
            mex++;
            freq[y]++;
        }
    }

    vector<int> a(n + 1, 0);
    a[n] = 1;
    for (int i = n - 1; i > n - mex; i--)
    {
        a[i] = a[i + 1] + 1;
    }

    a[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i])
            break;
        a[i] = a[i - 1] + freq[i];
    }

    for (auto &x : a)
        cout << x << " ";
    cout << "\n";
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
