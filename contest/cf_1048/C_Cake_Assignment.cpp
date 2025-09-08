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
    vector<int> a1;
    int k, x;
    cin >> k >> x;

    int b = (1LL << (k + 1));
    int p = (1LL << (k + 1)) - x;
    int a = x;
    int c = (1LL << k + 1), d = (1LL << k), e = (1LL << k);

    if (a == p)
    {
        pz;
        cout << endl;
        return;
    }
    int ok = 0;
    if (a < p)
    {
        while (true)
        {
            if (d % a != 0 && ok == 0)
            {
                d += (e / 2);
                e /= 2;
                a1.push_back(2);
                continue;
            }
            ok = 1;
            e += (d / 2);
            d /= 2;
            a1.push_back(1);
            if (d == x && e == p)
                break;
        }
    }
    else
    {
        while (true)
        {
            if (e % p != 0 && ok == 0)
            {
                e += (d / 2);
                d /= 2;
                a1.push_back(1);
                continue;
            }
            if (d == x && e == p)
                break;
            ok = 1;
            d += (e / 2);
            e /= 2;
            a1.push_back(2);
            // if (d == x && e == p)
            //     break;
        }
    }

    // reverse(ALL(a1));
    cout << a1.size() << "\n";
    for (int v : a1)
        cout << v << " ";
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
