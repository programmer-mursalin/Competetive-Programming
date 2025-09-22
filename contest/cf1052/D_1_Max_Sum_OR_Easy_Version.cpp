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
    int n, m;
    cin >> n >> m;
    vector<int> ans;
    map<int, int> mp;

    int curr = 0, p = 0;

    for (int i = 0; i <= m; i++)
    {
        p = 0;
        for (int j = 0; j <= 31; j++)
        {
            int x = p | (1LL << j);

            if (((i & (1LL << j)) == 0) && mp[x] == 0 && x <= m)
            {
                p |= (1LL << j);
            }
        }
        curr += (i | p);
        ans.push_back(p);
        mp[p] = 1;
    }
    // int x = 0;
    // for (auto it : ans)
    //     curr |= it;
    cout << curr << endl;
    for (auto it : ans)
        cout << it << " ";
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
