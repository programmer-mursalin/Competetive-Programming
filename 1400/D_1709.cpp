#include <bits/stdc++.h>
using namespace std;

void update(vector<int> &v, vector<pair<int, int>> &vp, int op)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - 1); j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                vp.push_back({op, j + 1});
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;

    vector<int> v1(n), v2(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    vector<pair<int, int>> vp;
    for (int i = 0; i < n; i++)
    {
        if (v1[i] > v2[i])
        {
            swap(v1[i], v2[i]);
            vp.push_back({3, i + 1});
        }
    }

    update(v1, vp, 1);
    update(v2, vp, 2);
    cout << vp.size() << endl;
    for (auto it : vp)
        cout << it.first << " " << it.second << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

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
