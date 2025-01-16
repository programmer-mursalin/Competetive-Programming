#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<ll> a(n), prefix_sum(n), reverse_prefix_sum(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    prefix_sum[0] = a[0];
    reverse_prefix_sum[0] = a[n - 1];

    unordered_set<ll> prefix_set, reverse_prefix_set;
    prefix_set.insert(prefix_sum[0]);
    reverse_prefix_set.insert(reverse_prefix_sum[0]);

    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
        reverse_prefix_sum[i] = reverse_prefix_sum[i - 1] + a[n - i - 1];

        prefix_set.insert(prefix_sum[i]);
        reverse_prefix_set.insert(reverse_prefix_sum[i]);
    }

    ll max_length = 0;
    int limit = (n % 2 == 0) ? n / 2 : (n - 1) / 2;

    for (int i = 0; i <= limit; i++)
    {
        if (reverse_prefix_set.count(prefix_sum[i]))
        {
            ll pos = find(prefix_sum.begin(), prefix_sum.end(), prefix_sum[i]) - prefix_sum.begin();
            max_length = max(max_length, pos + i + 2);
        }
        if (prefix_set.count(reverse_prefix_sum[i]))
        {
            ll pos = find(reverse_prefix_sum.begin(), reverse_prefix_sum.end(), reverse_prefix_sum[i]) - reverse_prefix_sum.begin();
            max_length = max(max_length, pos + i + 2);
        }
    }

    cout << min(max_length, n) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
