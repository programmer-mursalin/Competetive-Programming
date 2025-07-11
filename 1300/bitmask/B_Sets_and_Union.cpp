#include <bits/stdc++.h>

using i64 = long long;

void solve()
{
    int n;
    std::cin >> n;

    i64 Or = 0;
    std::vector<i64> a(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int k;
        std::cin >> k;

        while (k--)
        {
            int x;
            std::cin >> x;
            a[i] |= 1LL << x;
        }
        Or |= a[i];
    }
    for (int i = 1; i <= 50; i++)
    {
        if ((Or & (1LL << i)) != 0)

        {
            i64 v = 0;
            for (int j = 0; j < n; j++)
            {
                if ((a[j] & (1LL << i)) == 0)
                {
                    v |= a[j];
                }
            }
            ans = std::max(ans, __builtin_popcountll(v));
        }
    }
    std::cout << ans << "\n";
}

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}