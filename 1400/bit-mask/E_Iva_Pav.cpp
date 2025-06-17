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
bool cheak(int mid, vector<vector<int>> &mp, int l, int k)
{

    l--;
    int cnt = 0;

    for (int i = 0; i < 32; i++)
    {

        if (l > 0)
        {
            if ((mp[mid][i] - mp[l - 1][i] == 0))
            {
                cnt |= (1LL << i);
            }
        }
        else
        {
            cnt |= (1LL << i);
        }
    }
    return k >= cnt;
}
void solve()
{

    // 2d input
    // vector<vector< int>> d(n, vector< int>(m));
    int n;
    cin >> n;
    vector<int> a(n);
    vector<vector<int>> mp(n, vector<int>(32, 0)); // 6 bits: 0 to 5

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int j = 0; j < 32; j++) // from LSB to MSB (0 to 5)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] & (1LL << j)) == 0)
            {
                cnt++;
            }
            mp[i][j] = cnt;
        }
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int ans = -1;
        int l, k;
        cin >> l >> k;
        int low = l, high = n - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (cheak(mid, mp, l, k))
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        if (ans == -1)
        {
            cout << -1 << " ";
        }
        else
        {
            cout << (ans + 1) << " "; // Convert back to 1-based index
        }
    }

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
