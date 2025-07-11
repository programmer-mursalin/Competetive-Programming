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
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    int in = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        in ^= x;
        a[i] = x;
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    unordered_map<int, int> mp_z, mp_o, m_z, m_o;
    for (int i = 0; i < 31; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((a[j] & (1LL << i)) != 0)
                mp_o[i]++;
            else
                mp_z[i]++;
        }
    }

    for (int i = 0; i < 31; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((b[j] & (1LL << i)) != 0)
                m_o[i]++;
            else
                m_z[i]++;
        }
    }
    // cout << in << endl;
    int ans1 = 0, ans2 = 0;
    for (int i = 0; i < 31; i++)
    {

        if ((n & 1) && (m_o[i] >= 1) && mp_o[i] % 2 == 0)
        {
            ans1 += (1LL << i);
        }
    }

    for (int i = 0; i < 31; i++)
    {

        if (n % 2 == 0 && m_o[i] >= 1 && mp_o[i] % 2 == 1)
        {
            ans2 += (1LL << i);
        }
    }

    cout << in - ans2 << " " << in + ans1 << endl;
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
