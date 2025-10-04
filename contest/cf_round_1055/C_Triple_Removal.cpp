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
        int n, q;
        cin >> n >> q;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        // prefix sums for 0s and 1s
        vector<int> pre0(n + 1, 0), pre1(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            pre0[i] = pre0[i - 1] + (a[i] == 0);
            pre1[i] = pre1[i - 1] + (a[i] == 1);
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int len = r - l + 1;
            int cnt0 = pre0[r] - pre0[l - 1];
            int cnt1 = pre1[r] - pre1[l - 1];

            if (cnt0 % 3 != 0 && cnt1 % 3 != 0)
            {
                cout << -1 << "\n";
                continue;
            }

            // check if there exists at least one pair of same elements
            bool has_pair = (cnt0 >= 1 || cnt1 >= 1);

            int cost = ((len - 1 + 3) / 3);
            // if (!has_pair)
            //     cost++;
            cout << cost << "\n";
        }
    }
}
