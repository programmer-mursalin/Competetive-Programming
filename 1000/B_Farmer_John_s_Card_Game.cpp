#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cin >> v[i][j];
        }
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            sort(v[i].begin(), v[i].end());
            flag = 0;
            for (int j = 1; j < m; j++)
            {
                if (v[i][j] - v[i][j - 1] != n)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
                break;
        }
        if (flag)
        {
            cout << -1 << endl;
            continue;
        }
        vector<pair<int, int>> ans;
        for (int i = 0; i < n; i++)
        {
            ans.push_back({v[i][0], i});
        }
        sort(ans.begin(), ans.end());
        for (int i = 0; i < n; i++)
            cout << ans[i].second + 1 << " \n"[i == n - 1];
    }
}