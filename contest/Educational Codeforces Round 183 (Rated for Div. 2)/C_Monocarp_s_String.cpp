#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ALL(x) (x).begin(), (x).end()

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int cnt_a = count(ALL(s), 'a');
    int cnt_b = count(ALL(s), 'b');
    map<int, set<int>> suff_map;
    vector<int> pre_a(n, 0), pre_b(n, 0);
    vector<int> suff_a(n, 0), suff_b(n, 0);
    int c1 = 0, c2 = 0;
    int mini = INT_MAX;
    if (cnt_a == cnt_b)
    {
        cout << 0 << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a')
            c1++;
        if (s[i] == 'b')
            c2++;
        pre_a[i] = c1;
        pre_b[i] = c2;
    }
    c1 = 0;
    c2 = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'a')
            c1++;
        if (s[i] == 'b')
            c2++;
        suff_a[i] = c1;
        suff_b[i] = c2;
        suff_map[suff_a[i] - suff_b[i]].insert(i);
    }
    for (int i = 0; i < n; i++)
    {

        if (pre_a[i] == pre_b[i])
            mini = min(mini, n - i - 1);
    }

    for (int i = n - 1; i >= 0; i--)
    {

        if (suff_a[i] == suff_b[i])
            mini = min(mini, i);
    }
    for (int i = 0; i < n; i++)
    {
        int req = pre_b[i] - pre_a[i];
        if (suff_map.count(req))
        {
            auto it = suff_map[req].upper_bound(i);
            if (it != suff_map[req].end())
            {
                int index = *it;
                mini = min(mini, index - i - 1);
            }
        }
    }
    cout << (mini == INT_MAX ? -1 : mini) << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

/*===============================================
  :::::::::::::Author : Md.Mursalin:::::::::::::
  ===============================================*/
