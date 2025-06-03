#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
#define ll int
#define f(i, n) for (ll i = 0; i < n; i++)
#define ia(a, n) \
    ll a[n];     \
    f(i, n) cin >> a[i]
#define iv(v, n)     \
    vector<ll> v(n); \
    f(i, n) cin >> v[i]
#define MOD (1000000007)
#define INF 1000000000000000000LL // Infinity for ll
#define mp make_pair
#define nline '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define gcd __gcd

void solve()
{

    // 2d input
    ll n;
    cin >> n;
    iv(v, n);
    vector<ll> mi(5001, INT_MAX);
    queue<ll> q;
    f(i, n)
    {
        mi[v[i]] = 0;
        q.push(v[i]);
    }

    ll g = 0;
    f(i, n)
    {
        g = gcd(g, v[i]);
    }

    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == g)
        {
            cnt++;
        }
    }
    if (cnt > 0)
    {
        cout << n - cnt << '\n';
        return;
    }

    while (q.size())
    {
        ll val = q.front();
        q.pop();
        for (auto x : v)
        {
            ll gc = gcd(x, val);
            if (mi[gc] == INT_MAX)
            {
                mi[gc] = 1 + mi[val];
                q.push(gc);
            }
        }
    }

    cout << n + mi[g] - 1 << nline;
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
