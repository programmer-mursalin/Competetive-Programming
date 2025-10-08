#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ALL(x) (x).begin(), (x).end()
#define py cout << "YES\n";
#define pm cout << "1\n";
#define pz cout << "0\n";
#define pn cout << "NO\n";
#define cheakmate return;
int calc(vector<int> v)
{
    int mid = v.size() / 2, ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i != mid)
            ans += llabs(v[i] - v[mid]) - 1 - (llabs(mid - i) - 1);
    }
    return ans;
}

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '*')
            a.push_back(i);
        else
            b.push_back(i);
    }

    cout << calc(a) << "\n";
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
