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
    int ans = 0, q = 0;
    for (int i = 0; i < n; i++)
    {
        int w, x, r, z;
        cin >> w >> x >> r >> z;

        // if (w < r)
        //     q += abs(w - r);

        // if (x < z)
        //     ans += abs(x - z);
        // else if (x > z && r != 0 && w != 0)
        //     ans += abs(x - z);

        if (x > z)
        {
            q += (w + x - z);
        }
        else
        {
            if (w - r > 0)
                q += (w - r);
        }
    }

    cout << q << endl;
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
