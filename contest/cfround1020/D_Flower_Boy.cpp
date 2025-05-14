#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
#define ll long long
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

    int n, m;
    cin >> n >> m;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int c;
        cin >> c;
        arr.push_back(c);
    }
    vector<int> fr(m + 1, -1);
    vector<int> bc(m + 1, -1);
    vector<int> b;
    for (int i = 0; i < m; i++)
    {
        int c;
        cin >> c;
        b.push_back(c);
    }
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr[j] >= b[i])
        {
            fr[i] = j;
            ++j, ++i;
        }
        else
            ++j;
    }
    i = m - 1, j = n - 1;
    while (i >= 0 && j >= 0)
    {
        if (arr[j] >= b[i])
        {
            bc[i] = j;
            --j, --i;
        }
        else
            --j;
    }
    if (bc[0] != -1)
        cout << 0 << endl;
    else
    {
        int mn = INT_MAX;
        if (m == 1)
        {
            cout << b[0] << endl;
            cheakmate
        }
        for (int i = 1; i < m - 1; i++)
        {
            if (fr[i - 1] < bc[i + 1] && fr[i - 1] != -1 && bc[i + 1] != -1)
            {
                mn = min(mn, b[i]);
            }
        }
        if (bc[1] != -1)
            mn = min(mn, b[0]);
        if (fr[m - 2] != -1)
            mn = min(mn, b[m - 1]);

        if (mn == INT_MAX)
            cout << -1 << endl;
        else
            cout << mn << endl;
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
