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
    string a, b, c, d;
    cin >> n >> a;
    cin >> m >> b;
    cin >> c;

    d = a;
    int j = 0;

    for (int i = 0; i < c.size(); i++)
    {
        if (j >= m)
            break;

        if (c[i] == 'D')
        {
            d.push_back(b[j]);
        }
        else
        {
            d.push_back(b[j]);

            string temp = d;
            d[0] = temp.back();
            for (int k = 1; k < d.size(); k++)
            {
                d[k] = temp[k - 1];
            }
        }
        j++;
    }

    cout << d << endl;
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
