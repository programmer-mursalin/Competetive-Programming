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

    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt_0 = count(ALL(s), '0');
    int cnt_1 = count(ALL(s), '1');
    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < cnt_0)
        {
            if (s[i] == '1')
                c1++;
        }
        else
        {
            if (s[i] == '0')
                c1++;
        }
    }
    // if (c1 == 0)
    // {
    //     pz cheakmate
    // }
    // if (c1 == 1)
    // {
    //     cout << 1 << endl;
    //     cheakmate
    // }
    cout << c1 / 2 << endl;
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
