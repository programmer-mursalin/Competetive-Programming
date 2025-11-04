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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    map<int, int> mp, mp1;
    for (int j = 0; j < 31; j++)
    {
        int isOk = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] & (1LL << j)) == 0)
            {
                isOk = 1;
            }
            else
                cnt++;
        }
        if (isOk)
        {
            mp[j] = 1;
            mp1[j] = mp1[j] = n - cnt;

            continue;
        }
        ans |= (1LL << j);
    }

    for (int i = 30; i >= 0; i--)
    {
        if (mp[i])
        {
            if (k >= mp1[i])
            {
                ans |= (1LL << i);
                k -= mp1[i];
            }
        }
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
