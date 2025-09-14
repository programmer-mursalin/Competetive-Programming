#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
#define ll long long
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

    int n, k;
    cin >> n >> k;
    map<int, int> freq;
    vector<int> v(n);

    for (auto &x : v)
    {
        cin >> x;
        freq[x]++;
    }

    bool pos = true;
    for (auto &x : v)
    {
        if (freq[x] % k)
            pos = false;
    }
    if (!pos)
    {

        pz cheakmate
    }

    map<int, int> mp;
    int r = -1;
    ll ans = 0;
    for (int l = 0; l < n; l++)
    {
        while (r < n - 1)
        {
            if (mp[v[r + 1]] < freq[v[r + 1]] / k)
            {
                mp[v[r + 1]]++;
                r++;
            }
            else
                break;
        }

        ans += (r - l + 1);
        mp[v[l]]--;
    }

    cout << ans << "\n";
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
