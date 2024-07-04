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
    long long int n, m, k;
    cin >> n >> m >> k;
    vector<long long int> a(n), b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    bool ch = true;
    int c1 = 0, c2 = 0;
    map<int, int> mp1, mp2, mp3, mp4;

    for (int i = 0; i < n; i++)
    {
        mp1[a[i]] = 1;
    }

    for (int i = 0; i < m; i++)
    {
        mp2[b[i]] = 1;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp2[a[i]] == 1 && a[i] <= k && mp3[a[i]] == 0)
        {
            mp3[a[i]] = 1;
            cnt++;
        }
        if (mp2[a[i]] == 0 && mp3[a[i]] == 0 && a[i] <= k)
        {
            mp3[a[i]] = 1; // Fixed the assignment here
            c1++;
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (mp1[b[i]] == 0 && mp4[b[i]] == 0 && b[i] <= k)
        {
            mp4[b[i]] = 1; // Fixed the assignment here
            c2++;
        }
    }

    int x = 0, y = 0;

    if (c1 < k / 2)
    {
        x = k / 2 - c1;
    }

    if (c2 < k / 2)
    {
        y = k / 2 - c2;
    }

    if (x != 0)
    {
        if (x > cnt)
        {
            ch = false;
        }
        else
            cnt -= x;
    }

    if (y != 0)
    {
        if (y > cnt)
            ch = false;
    }

    cout << (ch ? "YES" : "NO") << endl;
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
