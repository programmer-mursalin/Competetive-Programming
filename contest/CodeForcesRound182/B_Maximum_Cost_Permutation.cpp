#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
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

    // 2d input
    // vector<vector< int>> d(n, vector< int>(m));
    int n;
    cin >> n;
    vector<int> a(n), b;
    set<int> st, o;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        a[i] = p;
        if (p != 0)
            st.insert(p);
    }

    // for (auto it : st)
    //     cout << it << " ";
    // cout << '\n'; // <- add newline
    int k = 1;

    while (!st.empty())
    {
        if (st.count(k))
        {
            st.erase(k);
            k++;
        }
        else
        {
            b.push_back(k);
            o.insert(k);
            k++;
        }
    }

    while (k <= n)
    {
        b.push_back(k);
        o.insert(k);
        k++;
    }

    sort(ALL(b), greater<int>());

    k = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            int leftmost = *o.begin();
            int rightmost = *o.rbegin();

            int d1 = abs((i + 1) - leftmost);
            int d2 = abs((i + 1) - rightmost);
            int dl;
            if (d1 > d2)
            {
                dl = leftmost;
                a[i] = *o.begin();
            }
            else
            {
                dl = rightmost;
                a[i] = *o.rbegin();
            }

            o.erase(dl);
        }
    }

    // for (int i = 0; i < a.size(); i++)
    // {
    //     cout << a[i] << " ";
    // }
    int c = -1, d = 0, ans = 0, ok = 0, r = 0;
    set<int> e, f;
    int p = -1, q = -1;
    vector<int> m, z;
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        e.insert(a[i]);
        f.insert(i + 1);
        m.push_back(a[i]);
        z.push_back(i + 1);

        while (!f.empty())
        {
            auto it = *f.rbegin();
            if (e.count(it))
                f.erase(it);

            if (f.empty())
            {

                ok = 0;
                e.clear();
                f.clear();
                r = 0;
                if (z != m)

                {

                    mini = min(mini, (long long)z.size());
                }
                m.clear();
                z.clear();
                break;
            }

            if (!e.count(it))
            {

                break;
            }
        }

        // ok++;
    }
    if (mini == INT_MAX)
        cout << 0 << endl;
    else
        cout << mini << endl;
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
