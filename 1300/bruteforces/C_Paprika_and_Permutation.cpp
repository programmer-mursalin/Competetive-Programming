#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ALL(x) (x).begin(), (x).end()
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pz cout << "0\n";
#define pn cout << "NO\n";
#define cheakmate return;

void solve()
{
    int n;
    cin >> n;
    multiset<int> s;
    vector<int> a(n), pnai;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (s.count(i))
        {
            s.erase(s.find(i));
            cnt++;
        }
        else
        {
            pnai.push_back(i);
        }
    }

    if (cnt == n)
    {
        pz cheakmate
    }

    sort(pnai.begin(), pnai.end());
    int ans = s.size();

    for (int x : pnai)
    {

        auto it = s.upper_bound(2 * x);
        if (it == s.end())
        {
            pm cheakmate
        }
        s.erase(it);
    }

    cout << ans << endl;
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
  :::::::::::::Author :Md.Mursalin:::::::::::::
  ===============================================*/
