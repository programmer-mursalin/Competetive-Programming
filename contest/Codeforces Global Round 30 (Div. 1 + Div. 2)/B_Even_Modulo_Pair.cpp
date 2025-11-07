#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // If smallest element is 1 → easy case
    if (a[0] == 1)
    {
        cout << 1 << " " << a[1] << "\n";
        return;
    }

    unordered_set<int> present(a.begin(), a.end());

    for (int x : a)
    {
        // check all multiples of x up to max(a)
        for (int mult = 2 * x; mult <= a.back(); mult += x)
        {
            if (present.count(mult))
            {
                cout << x << " " << mult << "\n";
                return;
            }
        }
    }

    cout << -1 << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}
