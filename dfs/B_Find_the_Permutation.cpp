#include <bits/stdc++.h>
using namespace std;
#define ALL(x) (x).begin(), (x).end()
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pz cout << "0\n";
#define pn cout << "NO\n";
#define cheakmate return;
#define Mod 1000000007

set<pair<int, int>> m; // Global to access in lambda

void solve()
{
    int n;
    cin >> n;

    vector<pair<int, int>> vp; // (row index, count)

    m.clear(); // Clear the global set before every test case

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            char x;
            cin >> x;
            if (x == '1' && i > j)
            {
                cnt++;
                m.insert({i, j}); // insert into set
            }
        }
        vp.emplace_back(i, cnt);
    }

    sort(vp.begin(), vp.end(), [](auto &a, auto &b)
         {
        if (a.second != b.second && 
            (m.count({a.first, b.first}) || m.count({b.first, a.first})))
        {
            return a.second < b.second;
        }
        return a.first > b.first; });

    for (auto &p : vp)
        cout << p.first + 1 << " ";
    cout << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
