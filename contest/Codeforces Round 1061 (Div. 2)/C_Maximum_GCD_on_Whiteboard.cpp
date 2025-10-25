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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int maxi = 1;

    vector<int> freq(n + 5, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        freq[a[i]]++;
    }

    vector<int> pref(n + 5, 0);
    for (int i = 1; i <= n + 2; i++)
    {
        pref[i] = pref[i - 1] + freq[i];
    }

    for (int i = 2; i <= n; i++)
    {
        int x = 4 * i + 1;
        if (x > n + 2)
            x = n + 2;

        int count = pref[x - 1];

        for (int j = i; j < x; j += i)
            count -= freq[j];

        if (count <= k)
            maxi = max(maxi, i);
    }

    cout << maxi << endl;
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
