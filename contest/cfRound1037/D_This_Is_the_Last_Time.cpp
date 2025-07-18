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

    int n, k;
    cin >> n >> k;

    vector<pair<pair<int, int>, int>> vp(n);
    for (int i = 0; i < n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        vp[i] = {{x, y}, z};
    }

    sort(vp.begin(), vp.end(), [](auto &a, auto &b)
         { return a.first.first < b.first.first; });

    priority_queue<int> pq;
    int i = 0;
    int pro = k;

    while (true)
    {

        while (i < n && vp[i].first.first <= pro)
        {
            if (vp[i].first.second >= pro)
            {
                pq.push(vp[i].second);
            }
            i++;
        }

        if (pq.empty())
            break;

        int z = pq.top();
        pq.pop();
        if (z > pro)
        {
            pro = z;
        }
    }

    cout << pro << endl;
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
