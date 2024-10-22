#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>
#define vpll vector<pair<long long, long long>>
#define pll pair<ll, ll>
#define gcd __gcd
#define inf 1e18
#define pb push_back
#define ff first
#define ss second
#define f(i, a, n) for (ll i = a; i < n; i++)
#define g(i, a, n) for (ll i = a; i >= n; i--)
#define w(t)  \
    int t;    \
    cin >> t; \
    f(case_num, 1, t + 1)
#define all(x) x.begin(), x.end()
#define yes() cout << "YES" << endl
#define no() cout << "NO" << endl
const int N = 1e5 + 5;
#define Mod 1000000007

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n - 1);
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }

    ll x = 1e9;
    vector<ll> ans(n);
    ans.push_back(x);
    ll sum = 0;
    for (ll i = n - 2; i >= 0; i--)
    {
        ans.push_back(x - (sum + a[i]));
        sum += a[i];
    }
    reverse(all(ans));

    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
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
