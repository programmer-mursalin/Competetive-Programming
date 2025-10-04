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

    int n, q;
    cin >> n >> q;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<int> pre0(n + 1, 0), pre1(n + 1, 0);
    vector<int> pre00(n + 1, 0), pre11(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        pre0[i] = pre0[i - 1] + (a[i] == 0);
        pre1[i] = pre1[i - 1] + (a[i] == 1);

        pre00[i] = pre00[i - 1];
        pre11[i] = pre11[i - 1];
        if (i > 1)
        {
            if (a[i] == 0 && a[i - 1] == 0)
                pre00[i]++;
            if (a[i] == 1 && a[i - 1] == 1)
                pre11[i]++;
        }
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int len = r - l + 1;

        int cnt0 = pre0[r] - pre0[l - 1];
        int cnt1 = pre1[r] - pre1[l - 1];

        if (cnt0 % 3 != 0 || cnt1 % 3 != 0)
        {
            cout << -1 << "\n";
            continue;
        }

        bool has_pair = ((pre00[r] - pre00[l]) > 0) || ((pre11[r] - pre11[l]) > 0);

        int cost = len / 3;
        if (!has_pair)
            cost++;

        cout << cost << "\n";
    }
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
