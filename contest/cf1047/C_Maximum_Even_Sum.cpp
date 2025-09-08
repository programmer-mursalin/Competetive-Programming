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
    int a, b;
    cin >> a >> b;
    if (a & 1 && b & 1)
    {
        cout << (a * b) + 1 << endl;
        cheakmate
    }
    if (!(a & 1) && (b & 1))
    {
        pm cheakmate
    }
    if (!(a & 1) && !(b & 1))
    {
        if ((b / 2) & 1)
        {
            cout << (a * (b / 2) + 2) << endl;
            cheakmate
        }
        cout << max(((a * 2) + (b / 2)), (a * (b / 2) + 2)) << endl;
        cheakmate
    }
    if ((b / 2) & 1)
    {
        pm cheakmate
    }

    cout << max(((a * 2) + (b / 2)), (a * (b / 2) + 2)) << endl;
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
