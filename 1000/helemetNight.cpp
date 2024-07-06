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
#define f(i, a, n) for (long long int i = a; i < n; i++)
#define g(i, a, n) for (long long int i = a; i >= n; i--)
#define w(t)  \
    int t;    \
    cin >> t; \
    f(case_num, 1, t + 1)
#define all(x) x.begin(), x.end()
#define yes() cout << "YES" << endl
#define no() cout << "NO" << endl
#define ALL(x) (x).begin(), (x).end()

const int N = 1e5 + 5;
#define Mod 1000000007

void solve()
{
    ll n, p;
    cin >> n >> p;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vpll vp;
    for (int i = 0; i < n; i++)
    {
        vp.emplace_back(b[i], i);
    }

    sort(ALL(vp));

    ll cnt = 1;
    ll cst = p; // Start with initial cost 'p'

    for (int i = 0; i < n; i++)
    {
        if (cnt >= n)
            break;

        if (vp[i].first <= p)
        {
            ll add_cnt = a[vp[i].second];
            if (cnt + add_cnt > n)
            {
                add_cnt = n - cnt;
            }
            cnt += add_cnt;
            cst += add_cnt * vp[i].first;
        }
        else
        {
            ll add_cnt = 1;
            if (cnt + add_cnt > n)
            {
                add_cnt = n - cnt;
            }
            cnt += add_cnt;
            cst += add_cnt * p;
        }
    }
    cout << cst << endl;
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
