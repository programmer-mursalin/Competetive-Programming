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

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    string x;
    cin >> x;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long left = 0, right = 1e9;
    while (right > left)
    {
        long mid = (left + right) / 2;
        long count = 0, blue = 0;

        for (int i = 0; i < n; ++i)
        {
            if (a[i] > mid)
            {
                if (x[i] == 'B' && blue == 0)
                {
                    ++count;
                    blue = 1;
                }
                else if (x[i] == 'R' && blue == 1)
                {
                    blue = 0;
                }
            }
        }

        if (count > k)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }

    cout << left << "\n";
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
