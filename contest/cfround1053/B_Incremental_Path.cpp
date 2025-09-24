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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int> a(m);
    set<int> st;
    int p = 2;

    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
        st.insert(a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            while (!st.empty() && st.count(p))
                p++;
            st.insert(p);
            while (!st.empty() && st.count(p))
                p++;
            p++;
        }

        else
        {

            st.insert(p);
            p++;
        }
    }

    cout << st.size() << "\n";
    for (auto it : st)
        cout << it << " ";
    cout << "\n";
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
