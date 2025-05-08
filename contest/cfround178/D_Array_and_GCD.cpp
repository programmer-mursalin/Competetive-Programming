#include <bits/stdc++.h>
using namespace std;
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
int cnt = 0;
vector<int> basePrimes;
vector<int> primesUpTo1e9;

void simpleSieve()
{
    int limit = 1e7;
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int p = 2; p * p <= limit; p++)
    {
        if (isPrime[p])
        {
            for (int i = p * p; i <= limit; i += p)
                isPrime[i] = false;
        }
    }

    for (int p = 2; p <= limit; p++)
    {
        if (isPrime[p])
        {
            basePrimes.push_back(p);
            primesUpTo1e9.push_back(p);
        }
        if (primesUpTo1e9.size() == 4e5)
            break;
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int l = 0, h = n - 1;
    int ans = n;
    while (l <= h)
    {
        int mid = l + (h - l) / 2; // fixed

        int bonus = 0, req = 0, s = 0;
        for (int j = mid; j < n; j++)
        {
            if (s >= primesUpTo1e9.size())
                break;
            if (a[j] > primesUpTo1e9[s])
                bonus += (a[j] - primesUpTo1e9[s]);
            else
                req += (primesUpTo1e9[s] - a[j]);
            s++;
        }

        if (bonus >= req)
        {
            ans = mid;
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    simpleSieve();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}