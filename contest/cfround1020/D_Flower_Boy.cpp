#include <bits/stdc++.h>
using namespace std;

#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define int long long

bool can_collect(const vector<int> &a, const vector<int> &b)
{
    int i = 0, j = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] >= b[j])
            j++;
        i++;
    }
    return j == b.size();
}

int32_t main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        // Step 1: যদি না বসিয়েই সম্ভব হয়
        if (can_collect(a, b))
        {
            cout << 0 << "\n";
            continue;
        }

        // Step 2: বসিয়েও যদি সম্ভব না হয় → পরে দেখবো
        int lo = 1, hi = 1e9, ans = -1;

        // Binary search করছি সর্বনিম্ন k খুঁজে পেতে
        while (lo <= hi)
        {
            int mid = (lo + hi) / 2;
            bool ok = false;

            // সব পজিশনে বসিয়ে দেখবো
            for (int i = 0; i <= n; i++)
            {
                vector<int> temp = a;
                temp.insert(temp.begin() + i, mid); // ফুল বসালাম
                if (can_collect(temp, b))
                {
                    ok = true;
                    break;
                }
            }

            if (ok)
            {
                ans = mid;
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
