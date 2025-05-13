#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
#define ll long long
#define gcd __gcd

#define ALL(x) (x).begin(), (x).end()
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pz cout << "0\n";
#define pn cout << "NO\n";
#define cheakmate return;
const int N = 1e5 + 5;
#define Mod 1000000009 + 7

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> d(n, vector<int>(n, -1));

    int x = n / 2, y = n / 2;
    if (n % 2 == 0)
    {
        x = n / 2 - 1;
        y = n / 2 - 1;
    }

    int st = 0;
    d[x][y] = st++;

    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    int step = 1;

    while (st < n * n)
    {
        for (int dir = 0; dir < 4; dir++)
        {
            int times = (dir / 2 == 0) ? step : step;
            for (int i = 0; i < times; i++)
            {
                x += dx[dir];
                y += dy[dir];
                if (x >= 0 && y >= 0 && x < n && y < n)
                    d[x][y] = st++;
            }
            if (dir == 1 || dir == 3)
                step++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << d[i][j] << " ";
        cout << "\n";
    }
}
// sort(ALL(a),greater<int>());
// int maxi=*max_element(a.begin(),a.end());
//  int maxi = distance(a.begin(), max_element(a.begin(), a.end()));   // return max index

signed main()
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

/*===============================================
  :::::::::::::Author :Md.Mursalin:::::::::::::
  ===============================================*/
