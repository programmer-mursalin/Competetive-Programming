#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(b.begin(), b.end());
    long long r = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        int x = m - (int)(lower_bound(b.begin(), b.end(), i) - b.begin());
        int y = m - (int)(lower_bound(b.begin(), b.end(), n - i) - b.begin());
        int z = m - (int)(lower_bound(b.begin(), b.end(), max(i, n - i)) - b.begin());
        r += (long long)x * y - z;
    }
    cout << r << "\n";
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
