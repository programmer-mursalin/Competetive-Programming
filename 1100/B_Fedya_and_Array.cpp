#include <bits/stdc++.h>
using namespace std;
using i64 = long long;

void solve()
{
    int x, y;
    std::cin >> x >> y;

    vector<int> ans;
    for (int i = x; i > y; i--)
    {
        ans.push_back(i);
    }
    for (int i = y; i < x; i++)
    {
        ans.push_back(i);
    }

    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
        }
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