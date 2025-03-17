/*
    "BISMILLAHIR RAHMANIR RAHIM"
    ("IN THE NAME OF ALLAH, THE MOST GRACIOUS AND THE MOST MERCIFUL")
    CodeMonsterShu
    Department of Computer Science and Engineering
    Sheikh Hasina University, Netrokona, Bangladesh.
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define all(x) x.begin(), x.end()
#define ff first
#define ss second
#define pb push_back
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define cheakmate return;

bool isSorted(vector<int> &a)
{
    return is_sorted(all(a));
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    if (isSorted(a))
    {
        py;
        cheakmate;
    }

    sort(all(b));

    int prev = -INFINITY;
    // auto it = lower_bound(all(b), a[0]);
    // if (it != b.end())
    // {
    //     prev = min(a[0], *it - a[0]);
    // }
    // else
    // {
    //     prev = b[0] - a[0];
    // }

    for (int i = 0; i < n; i++)
    {
        auto it = lower_bound(all(b), a[i] + prev);
        if (it != b.end())
        {
            if (a[i] < prev)
            {
                prev = *it - a[i];
            }
            else
            {
                prev = min(a[i], *it - a[i]);
            }
        }
        else
        {
            if (a[i] < prev)
            {
                pn;
                cheakmate;
            }
            else
            {
                prev = a[i];
            }
        }
    }
    py;
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
