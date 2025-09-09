#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        // 1. Original alternating sum
        int alt_sum = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
                alt_sum += a[i];
            else
                alt_sum -= a[i];
        }

        int ans = alt_sum; // Alice may just end immediately

        // 2. Alice tries one swap (best possible)
        // Idea: swap only affects two positions (l, r)
        // We check if swapping can improve the value
        // Brute force is impossible (n <= 2e5), so we need clever observation.

        // Trick: Alice benefits if she can bring a large value to an odd index
        // and a small value to an even index.

        int max_odd = LLONG_MIN, min_even = LLONG_MAX;
        int odd_pos = -1, even_pos = -1;

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            { // odd position
                if (a[i] > max_odd)
                {
                    max_odd = a[i];
                    odd_pos = i;
                }
            }
            else
            { // even position
                if (a[i] < min_even)
                {
                    min_even = a[i];
                    even_pos = i;
                }
            }
        }

        if (odd_pos != -1 && even_pos != -1)
        {
            // If we swap max_odd (odd index) with min_even (even index)
            int new_alt = alt_sum;

            // Effect of removing old contribution
            new_alt -= max_odd;  // odd contributed positively
            new_alt += min_even; // even contributed negatively

            // After swap: contributions reversed
            new_alt += min_even; // now odd position gets min_even
            new_alt -= max_odd;  // now even position gets max_odd

            // So new_alt simplified:
            // new_alt = alt_sum - max_odd + min_even + min_even - max_odd
            // new_alt = alt_sum - 2*max_odd + 2*min_even

            new_alt = alt_sum - 2 * max_odd + 2 * min_even;

            int cost = abs(odd_pos - even_pos);
            ans = max(ans, new_alt + cost);
        }

        cout << ans << "\n";
    }
    return 0;
}
