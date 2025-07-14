#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ALL(x) (x).begin(), (x).end()

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(ALL(a), greater<int>());
    for (int i = 0; i < 2 * k; i++)
    {

        mp[a[i]]++;
    }

    vector<bool> used(n, false);
    int ans = 0;

    for (int i = 0; i < 2 * k; i++)
    {
        if (used[i])
            continue;
        int in = -1, mini = 0;
        for (int j = i + 1; j < 2 * k; j++)
        {
            if (mp[a[j]] > mini)
            {

                mini = mp[a[j]];
                in = a[j];
                // mp[a[j]]--;
            }
        }
        // cout << mini << " ";
        // cout << in << " ";
        mp[in]--;
        ans += (in / a[i]);
    }
    // cout << ans << endl;
    int leftSum = 0;
    for (int i = 2 * k; i < n; i++)

        leftSum += a[i];

    cout << leftSum + ans << '\n';
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
