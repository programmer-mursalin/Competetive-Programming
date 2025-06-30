#include <bits/stdc++.h>
using namespace std;
#define int long long
#define gcd __gcd
#define ALL(x) (x).begin(), (x).end()
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define pm cout << "-1\n";
#define pz cout << "0\n";
#define cheakmate return;
const int Mod = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;

    // Total numbers including (k-1) extra for creating k groups
    int total = n + (k - 1);

    // Sum from 1 to total
    int sum_all = (total * 1LL * (total + 1)) / 2;

    // Sum of (k - 1) smallest numbers: 1 + 2 + ... + (k-1)
    int removed_sum = ((k - 1) * 1LL * k) / 2;

    int remaining_sum = sum_all - removed_sum * 1LL;

    int low = k, high = total;
    int answer = n + k - 1;
    int min_diff = LLONG_MAX;

    while (low <= high)
    {
        int mid = (low + high) * 1LL / 2;

        // c = sum of first part (after removing k-1 elements), from k to mid
        int c = (mid * (mid + 1)) * 1LL / 2 - removed_sum;

        // d = sum of the rest elements
        int d = remaining_sum * 1LL - c;

        int diff = abs(d - c);
        if (diff < min_diff)
        {
            min_diff = diff;
            answer = diff;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << answer << "\n";
}

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
  :::::::::::::Author : Md.Mursalin:::::::::::::
  ===============================================*/
