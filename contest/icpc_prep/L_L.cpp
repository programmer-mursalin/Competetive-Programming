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
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<vector<int>> dv(n + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            dv[j].push_back(i);
        }
    }

    vector<int> ans(n, 0);
    for (int i = 1; i <= n; i++)
    {
        int maxi = INT_MIN;
        int p = dv[i].size();
        for (int j = 0; j < p; j++)
        {
            for (int k = 0; k < p; k++)
            {
                if (__gcd(dv[i][j], dv[i][k]) == i)
                {
                    int idx_a = dv[i][j] - 1;
                    int idx_b = dv[i][k] - 1;
                    maxi = max(maxi, abs(a[idx_a] - b[idx_b]));
                }
            }
        }
        ans[i - 1] = maxi;
    }

    for (auto it : ans)
        cout << it << " ";
    cout << endl;
}
// sort(ALL(a),greater<int>());
// int maxi=*max_element(a.begin(),a.end());
//  int maxi = distance(a.begin(), max_element(a.begin(), a.end()));   // return max index

signed main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    return 0;
}

/*===============================================
  :::::::::::::Author :Md.Mursalin:::::::::::::
  ===============================================*/
