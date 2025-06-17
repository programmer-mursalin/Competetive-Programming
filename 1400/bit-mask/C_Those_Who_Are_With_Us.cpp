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
#define Mod 1000000009 + 7

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> d(n, vector<int>(m));
    map<int, int> mp;
    int x = 0;

    // Input the matrix and count frequencies
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> d[i][j];
            mp[d[i][j]]++;
            x = max(x, d[i][j]); // Find max element
        }
    }

    int m1, m2, l1 = 0, l2 = 0, p1 = -1, p2 = -1;

    // Find the row with most occurrences of x
    for (int i = 0; i < n; i++)
    {
        m1 = 0;
        for (int j = 0; j < m; j++)
        {
            if (d[i][j] == x)
                m1++;
        }

        if (m1 > l1)
        {
            l1 = m1;
            p1 = i;
        }
    }

    // Find the column with most occurrences of x
    for (int i = 0; i < m; i++)
    {
        m2 = 0;
        for (int j = 0; j < n; j++)
        {
            if (d[j][i] == x)
                m2++;
        }

        if (m2 > l2)
        {
            l2 = m2;
            p2 = i;
        }
    }

    // Check if x occurs in more than one row apart from the p2-th column
    set<int> st, s1;
    for (int i = 0; i < m; i++)
    {
        if (i != p2)
        {
            for (int j = 0; j < n; j++)
            {
                if (d[j][i] == x)
                {
                    st.insert(j); // collect row indices
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i != p1)
        {
            for (int j = 0; j < m; j++)
            {
                if (d[i][j] == x)
                {
                    s1.insert(j); // collect row indices
                }
            }
        }
    }
    // If x appears in more than one row outside p2 column, we must choose x
    if (st.size() > 1 && s1.size() > 1)
    {
        cout << x << endl;
        cheakmate
    }

    // Else, check if l1 + l2 covers all occurrences of x

    cout << x - 1 << endl;
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
  :::::::::::::Author : Md. Mursalin :::::::::::::
  ===============================================*/