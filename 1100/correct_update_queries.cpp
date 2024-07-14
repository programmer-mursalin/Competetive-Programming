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
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pn cout << "NO\n";

const int N = 1e5 + 5;
#define Mod 1000000007

void solve()
{
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vll a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    string s1;
    cin >> s1;

    // Sorting
    sort(s1.begin(), s1.end());
    sort(a.begin(), a.end());

    //
    map<int, int> mp;
    int j = 0;
    for (int i = 0; i < m; i++)
    {
        if (mp[a[i]] == 0)
        {
            s[a[i] - 1] = s1[j];
            mp[a[i]] = 1;
            j++;
        }
    }

    cout << s << endl;
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
