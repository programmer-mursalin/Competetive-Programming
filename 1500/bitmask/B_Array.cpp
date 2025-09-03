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
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, mask = 0;
    pair<int, int> ans = {-1, -1};

    for (int r = 0; r < n; r++)
    {
        mask |= (1 << (a[r] - 1)); // number ai ke bitmask e add

        while (__builtin_popcount(mask) > k)
        {
            mask &= ~(1 << (a[l] - 1)); // left remove
            l++;
        }

        if (__builtin_popcount(mask) == k)
        {
            ans = {l + 1, r + 1};
            break; // minimal by inclusion
        }
    }

    cout << ans.first << " " << ans.second << endl;
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
