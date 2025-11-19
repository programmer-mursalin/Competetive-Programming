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
int calculate_sum(int n)
{
    return (n * (n + 1)) / 2;
}
void solve()
{

    // 2d input
    // vector<vector< int>> d(n, vector< int>(m));
    int n, m;
    cin >> n >> m;
    int high = (2 * n) - 1;
    int low = 1;
    // int low = 1, high = ((n * (n + 1)) / 2) + ((p * (p + 1)) / 2);
    int ans = 1;
    while (low <= high)
    {
        int mid = low + ((high - low) / 2);
        if (mid <= n)
        {
            if (calculate_sum(mid) > m)
            {
                ans = mid;
                high = mid - 1;
            }
            else if (calculate_sum(mid) == m)
            {
                ans = mid;
                break;
            }

            else
            {
                ans = max(ans, mid);
                low = mid + 1;
            }
        }

        else
        {
            int kt_bro = mid - n;
            int a = calculate_sum(n - 1) - calculate_sum((n - 1) - kt_bro);
            int x = calculate_sum(n) + a;

            if (x > m)
            {
                ans = mid;
                high = mid - 1;
            }

            else if (x == m)
            {
                ans = mid;
                break;
            }

            else
            {
                ans = max(ans, mid);
                low = mid + 1;
            }
        }
    }

    cout << ans << endl;
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
