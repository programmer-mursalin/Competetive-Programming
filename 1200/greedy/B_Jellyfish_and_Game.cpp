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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int sz = max(n, m);
    if (k & 1 && !(max(n, m) & 1))
        sz = max(n, m) + 1;
    if (!(k & 1) && (max(n, m) & 1))
        sz = max(n, m) + 1;
    for (int i = 0; i < sz; i++)
    {
        sort(a.begin(), a.end()); // a ascending
        sort(b.begin(), b.end()); // b ascending

        if (i % 2 == 0)
        {
            // যদি a এর ছোটতম < b এর বড়তম, তাহলে swap করে দিবেন
            if (a[0] < b[m - 1])
            {
                swap(a[0], b[m - 1]);
            }
        }
        else
        {
            // যদি b এর ছোটতম < a এর বড়তম, তাহলে swap
            if (b[0] < a[n - 1])
            {
                swap(b[0], a[n - 1]);
            }
        }
    }

    cout << accumulate(a.begin(), a.end(), 0ll) << "\n";
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
