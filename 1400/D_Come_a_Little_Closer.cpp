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
    ll n;
    cin >> n;
    map<ll, ll> mpx, mpy;
    vector<pair<ll, ll>> arr;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        arr.push_back({x, y});
        mpx[x]++;
        mpy[y]++;
    }
    if (n == 1)
    {
        cout << 1 << endl;
        cheakmate
    }
    ll currx = ((--mpx.end())->first) - (mpx.begin()->first) + 1;
    ll curry = ((--mpy.end())->first) - (mpy.begin()->first) + 1;
    ll ans = currx * curry;
    for (int i = 0; i < n; i++)
    {
        mpx[arr[i].first]--;
        mpy[arr[i].second]--;
        if (mpx[arr[i].first] == 0)
        {
            mpx.erase(arr[i].first);
        }
        if (mpy[arr[i].second] == 0)
        {
            mpy.erase(arr[i].second);
        }
        ll currx = ((--mpx.end())->first) - (mpx.begin()->first) + 1;
        ll curry = ((--mpy.end())->first) - (mpy.begin()->first) + 1;
        ll curr = (currx * curry);
        if (curr == n - 1)
        {
            curr = min(curr + currx, curr + curry);
        }
        ans = min(ans, curr);
        mpx[arr[i].first]++;
        mpy[arr[i].second]++;
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
