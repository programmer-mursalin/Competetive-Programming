#include <bits/stdc++.h>
using namespace std;

#define int long long

const int MAX_BITS = 32;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    // Preprocessing: bitCount[bit][i] = how many numbers till i have bit `bit` set
    vector<vector<int>> bitCount(MAX_BITS, vector<int>(n, 0));

    for (int bit = 0; bit < MAX_BITS; ++bit)
    {
        for (int i = 0; i < n; ++i)
        {
            if (a[i] & (1LL << bit))
            {
                bitCount[bit][i] = 1;
            }
            if (i > 0)
            {
                bitCount[bit][i] += bitCount[bit][i - 1];
            }
        }
    }

    int q;
    cin >> q;

    while (q--)
    {
        int l, k;
        cin >> l >> k;
        l--; // 0-based indexing

        int low = l, high = n - 1;
        int answer = -1;

        while (low <= high)
        {
            int mid = (low + high) / 2;
            int val = 0;

            for (int bit = 0; bit < MAX_BITS; ++bit)
            {
                int count = bitCount[bit][mid] - (l > 0 ? bitCount[bit][l - 1] : 0);
                if (count == mid - l + 1)
                {
                    val |= (1LL << bit);
                }
            }

            if (val >= k)
            {
                answer = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        if (answer == -1)
            cout << -1 << " ";
        else
            cout << (answer + 1) << " "; // convert back to 1-based index
    }

    cout << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
