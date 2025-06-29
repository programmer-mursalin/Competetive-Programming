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

    // 2d input
    // vector<vector< int>> d(n, vector< int>(m));
    //   int n;
    // cin >> n;
    // vector< int> a(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    //}
    int n;
    cin >> n;
    vector<int> d(n);
    for (auto &x : d)
        cin >> x;
    vector<pair<int, int>> rng(n), valid_rng(n);
    for (auto &[x, y] : rng)
        cin >> x >> y;

    int l = 0, r = 0;
    bool pos = true;
    for (int i = 0; i < n; i++)
    {
        if (d[i] == 1)
        {
            l++;
            r++;
        }
        if (d[i] == -1)
        {
            r++;
        }

        int nl = max(l, rng[i].first);
        int nr = min(r, rng[i].second);

        if (nl > nr)
        {
            pos = false;
            break;
        }
        l = nl, r = nr;
        valid_rng[i] = {l, r};
    }

    if (!pos)
    {
        pm cheakmate
    }

    deque<int> ans;
    int poss = valid_rng[n - 1].second;
    for (int i = n - 1; i > 0; i--)
    {
        if (d[i] != -1)
        {
            ans.push_front(d[i]);
            if (d[i])
                poss--;
            continue;
        }

        if (poss <= valid_rng[i - 1].second)
            ans.push_front(0);
        else
        {
            ans.push_front(1);
            poss--;
        }
    }
    if (d[0] != -1)
    {
        ans.push_front(d[0]);
    }
    else
    {
        if (poss <= 0)
            ans.push_front(0);
        else
            ans.push_front(1);
    }

    for (auto &x : ans)
        cout << x << " ";
    cout << "\n";
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
