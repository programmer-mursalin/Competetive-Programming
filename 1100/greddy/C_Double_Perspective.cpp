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
    int n;
    cin >> n;
    vector<pair<int, int>> vp(n);
    map<int, int> mp, mp1, ans;
    for (int i = 0; i < n; i++)
    {
        cin >> vp[i].first >> vp[i].second;
        if (mp[vp[i].first] == 0)
        {
            mp[vp[i].first] = vp[i].second;
            ans[vp[i].first] = i + 1;
        }
        else if (vp[i].second > mp[vp[i].first] && mp[vp[i].first] != 0)
        {
            mp[vp[i].first] = vp[i].second;
            ans[vp[i].first] = i + 1;
        }
    }
    cout << ans.size() << endl;
    for (auto it : ans)
        cout << it.second << " ";
    cout << endl;
}

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
