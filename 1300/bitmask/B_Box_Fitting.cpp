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
    int n, w;
    cin >> n >> w;
    vector<int> a(n);
    multiset<int> ms;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ms.insert(a[i]);
    }

    int ans = 0;

    while (!ms.empty())
    {
        int x = w;

        while (x > 0 && !ms.empty())
        {
            auto it = ms.upper_bound(x);
            if (it == ms.begin())
                break;
            --it;
            x -= *it;
            ms.erase(it);
        }

        ans++;
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
