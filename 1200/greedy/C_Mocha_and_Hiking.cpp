#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a)
        cin >> x;

    int pos = -1;

    if (a[0] == 1)
    {
        // insert at beginning
        cout << n + 1 << " ";
        for (int i = 1; i <= n; i++)
            cout << i << " ";
        cout << "\n";
        return;
    }

    if (a[n - 1] == 0)
    {
        // insert at end
        for (int i = 1; i <= n; i++)
            cout << i << " ";
        cout << n + 1 << "\n";
        return;
    }

    // find first 0 followed by 1
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == 0 && a[i + 1] == 1)
        {
            pos = i + 1;
            break;
        }
    }

    if (pos == -1)
    {
        cout << -1 << "\n";
        return;
    }

    for (int i = 1; i <= pos; i++)
        cout << i << " ";
    cout << n + 1 << " ";
    for (int i = pos + 1; i <= n; i++)
        cout << i << " ";
    cout << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
