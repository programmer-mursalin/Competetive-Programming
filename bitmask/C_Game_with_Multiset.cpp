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
    int t;
    cin >> t;
    unordered_map<int, int> mp;

    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;

        int value = (1 << m);

        if (n == 1)
        {
            mp[value]++;
        }
        else
        {
            int st = m;
            for (int i = 31; i >= 0; i--)
            {
                int power = (1 << i);
                if (power <= st)
                {
                    int d = st / power;
                    int use = min(d, mp[power]);
                    st -= use * power;
                }
            }

            if (st == 0)
                py else pn
        }
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

    solve();

    return 0;
}

/*===============================================
  :::::::::::::Author :Md.Mursalin:::::::::::::
  ===============================================*/
