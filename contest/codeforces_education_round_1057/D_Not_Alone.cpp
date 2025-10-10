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
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long ans = LLONG_MAX;

        for (int i = 0; i < n; i++)
        {
            long long diff = abs(a[i] - a[(i + 1) % n]);
            ans = min(ans, (diff + 1) / 2); // ceil(diff / 2)
        }

        cout << ans << "\n";
    }
}
