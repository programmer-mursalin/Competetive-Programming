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
#define Mod 1000000009 + 7

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b, c(n);
    map<int, int> mp, m;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < i + 1)
            mp[a[i]]++;
    }

    c = a;
    sort(c.begin(), c.end());

    for (int i = 0; i < n; i++)
    {
        if (mp[c[i]] > 0 && m[c[i]] == 0)
        {
            b.push_back(c[i]);
            m[c[i]] = 1;
        }
    }

    sort(b.begin(), b.end());

    vector<int> pre_val(b.size());
    if (!b.empty())
    {
        pre_val[b.size() - 1] = mp[b.back()];
        for (int i = (int)b.size() - 2; i >= 0; i--)
            pre_val[i] = mp[b[i]] + pre_val[i + 1];
    }

    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < i + 1)
        {
            auto it = upper_bound(b.begin(), b.end(), i + 1);
            if (it != b.end())
            {
                int index = it - b.begin();
                ans += pre_val[index];
            }
        }
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
