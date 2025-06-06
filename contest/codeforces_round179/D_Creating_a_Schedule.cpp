#include <bits/stdc++.h>
using namespace std;
#define int long long
#define gcd __gcd

#define ALL(x) (x).begin(), (x).end()
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pz cout << "0\n";
#define pn cout << "NO\n";
#define cheakmate return;
const int N = 1e5 + 5;
#define Mod 1000000007 // Fixed modulus definition
pair<int, int> getSortKey(int num)
{
    return {num / 100, num % 100}; // {main_key, tie_breaker}
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    // Create copies of 'a'
    vector<int> b = a;
    vector<int> c = a;

    // Sort b by ascending order of (value / 100)
    sort(b.begin(), b.end(), [](int a, int b)
         {
             auto A = getSortKey(a);
             auto B = getSortKey(b);
             return A <= B; // sort by first, then second
         });
    sort(c.begin(), c.end(), [](int a, int b)
         {
             auto A = getSortKey(a);
             auto B = getSortKey(b);
             return A >= B; // sort by first, then second
         });

    int sz = n / 2;
    if (n % 2 == 0)
        sz--;

    // d matrix: n rows, 6 columns
    vector<vector<int>> d(n, vector<int>(6));

    for (int i = 0; i < 6; i++)
    {
        int k = 0, l = 0;
        for (int j = 0; j < n; j++)
        {
            if (i % 2 == 0)
            {
                // Even column: first sz from b, rest from c
                if (k <= sz)
                {
                    d[j][i] = b[k++];
                }
                else
                {
                    d[j][i] = c[l++];
                }
            }
            else
            {
                // Odd column: first sz from c, rest from b
                if (l <= sz)
                {
                    d[j][i] = c[l++];
                }
                else
                {
                    d[j][i] = b[k++];
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << d[i][j] << " ";
        }
        cout << "\n";
    }

    // for (int i = 0; i < m; i++)
    //     cout << b[i] << " ";
    // cout << endl;
    // for (int i = 0; i < m; i++)
    //     cout << c[i] << " ";
}

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
