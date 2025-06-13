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
int bitsRequired(unsigned int n)
{
    if (n == 0)
        return 1; // 0 এর জন্য 1 বিট ধরে নিই
    return (int)std::floor(std::log2(n)) + 1;
}

void solve()
{

    // 2d input
    // vector<vector< int>> d(n, vector< int>(m));
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        ans += __builtin_popcount(a[i]);
        int r = bitsRequired(a[i]);
        for (int j = 60; j >= 0; j--)
        {
            if ((a[i] & (1LL << j)) == 0)
            {
                v.push_back(1LL << j);
            }
        }
    }
    sort(ALL(v));
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] <= k)
        {
            ans++;
            k -= v[i];
        }
        // if (k <= 0)
        //     break;
    }
    cout << ans << endl;
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
