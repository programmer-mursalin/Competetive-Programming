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
    long long int n;
    cin >> n;
    vector<long long int> a(n), b(n, 1), c;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }

    for (auto it : mp)
    {
        if (it.second >= 2)
            c.push_back(it.first);
    }

    if (c.size() < 2)
    {
        cout << -1 << endl;
        return;
    }

    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == c[0])
        {
            if (cnt1 == 0)
            {
                b[i] = 1;
                cnt1++;
            }
            else
            {
                b[i] = 2;
            }
        }
        else if (a[i] == c[1])
        {
            if (cnt2 == 0)
            {
                b[i] = 1;
                cnt2++;
            }
            else
            {
                b[i] = 3;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
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
