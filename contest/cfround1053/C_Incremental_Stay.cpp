#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(2 * n);
        for (int i = 0; i < 2 * n; i++)
            cin >> a[i];

        // Step 1: জোড়া বানানো
        vector<pair<long long, long long>> pairs(n);
        for (int i = 0; i < n; i++)
            pairs[i] = {a[2 * i], a[2 * i + 1]};

        // Step 2: k=1 জন্য non-overlapping intervals
        sort(pairs.begin(), pairs.end(), [](auto &x, auto &y)
             { return x.second < y.second; });
        long long lastEnd = -1;
        long long maxK1 = 0;
        for (auto &p : pairs)
        {
            if (p.first > lastEnd)
            { // non-overlapping
                maxK1 += p.second - p.first;
                lastEnd = p.second;
            }
        }

        // Step 3: k>1 জন্য সব পার্থক্য
        vector<long long> diffs(n);
        for (int i = 0; i < n; i++)
            diffs[i] = pairs[i].second - pairs[i].first;
        sort(diffs.begin(), diffs.end());

        vector<long long> res(n);
        res[0] = maxK1; // k=1

        // k = 2..n
        for (int k = 2; k <= n; k++)
        {
            long long total = 0;
            for (int i = n - k; i < n; i++)
                total += diffs[i];
            res[k - 1] = total;
        }

        // Step 4: output
        for (int i = 0; i < n; i++)
        {
            cout << res[i] << (i == n - 1 ? "\n" : " ");
        }
    }

    return 0;
}
