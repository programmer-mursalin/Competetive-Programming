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
#define Mod 1000000007

set<int> prime_factor(int n)
{
    set<int> prime;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            prime.insert(i);
            n /= i;
        }
    }
    if (n > 1)
        prime.insert(n);
    return prime;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> ans(n + 1);
    for (int i = 1; i <= n; i++)
        ans[i] = i;

    for (int i = 2; i <= n; i++)
    {

        set<int> rp = prime_factor(i);
        int fast_pf = *rp.rbegin();
        int x = ans[fast_pf];
        ans[fast_pf] = i;
        ans[i] = x;
    }

    for (int i = 1; i <= n; i++)
        cout
            << ans[i] << " ";
    cout << "\n";
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
  :::::::::::::Author : Md.Mursalin:::::::::::::
  ===============================================*/
