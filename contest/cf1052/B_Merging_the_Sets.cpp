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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n);
    unordered_map<int, int> freq; // or map if values big or unordered_map ok
    int distinct = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[i].resize(x);
        for (int j = 0; j < x; j++)
        {
            cin >> v[i][j];
            if (freq[v[i][j]] == 0)
            {
                distinct++;
            }
            freq[v[i][j]]++;
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        // remove all v[i]
        for (int val : v[i])
        {
            freq[val]--;
            if (freq[val] == 0)
            {
                distinct--;
            }
        }
        if (distinct == m)
        {
            cnt++;
        }
        // restore them back
        for (int val : v[i])
        {
            if (freq[val] == 0)
            {
                distinct++;
            }
            freq[val]++;
        }
    }

    if (cnt >= 2)
    {
        py
    }
    else
    {
        pn
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