#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
#define int long long
#define gcd __gcd
#define ALL(x) (x).begin(), (x).end()
#define py cout << "Yes\n";
#define pm cout << "-1\n";
#define pz cout << "0\n";
#define pn cout << "No\n";
#define cheakmate return;
const int N = 1e5 + 5;
#define Mod 1000000009 + 7
void solve()
{
    int n;
    cin >> n;

    vector<vector<int>> vv(n);
    map<int, int> mp;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vv[i].resize(x);
        for (int j = 0; j < x; j++)
        {
            int p;
            cin >> p;
            vv[i][j] = p;
            c |= (1LL << p);
            mp[p]++;
        }
    }

    // Sort based on unique element count (descending)

    int ok = 0;

    for (int i = 0; i < n; i++)
    {
        int intrnlcurr = 0, t = 0;
        for (int j = 0; j < vv[i].size(); j++)
        {

            if (mp[vv[i][j]] <= 1)
            {
                t = 1;
            }
        }

        if (t == 0)
        {
            ok = 1;
            break;
        }
    }

    if (ok)
        py else pn
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