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
    // int l, r;
    // cin >> l >> r;

    // int p = -1, q = -1, o;
    // for (int i = 63; i >= 0; i--)
    // {

    //     if ((r & (1LL << i)) != 0)
    //     {
    //         p = i;
    //         break;
    //     }
    // }
    // for (int i = 63; i >= 0; i--)
    // {

    //     if ((l & (1LL << i)) != 0)
    //     {
    //         q = i;
    //         break;
    //     }
    // }
    ll l, r;
    cin >> l >> r;
    ll ans = 0;
    ll a, b, c;
    for (int i = 30; i >= 0; i--)
    {
        ll b1 = 0;
        ll b2 = 0;
        if (l & (1ll << i))
        {
            b1 = 1;
        }
        if (r & (1ll << i))
        {
            b2 = 1;
        }
        if (b1 == b2)
        {
            ans += b1 * (1ll << i);
        }
        else
        {
            a = ans + (1ll << i);
            b = a - 1;
            break;
        }
    }
    for (ll i = l; i <= r; i++)
    {
        if (i != a && i != b)
        {
            c = i;
            break;
        }
    }
    cout << a << " " << b << " " << c << endl;
    // o = (1ll << p);
    // int a = 0, s = l;
    // if (p != q)
    // {
    //     for (int i = p - 1; i >= 0; i--)
    //     {
    //         if ((l & (1LL << i)) == 0)
    //         {
    //             a |= (1LL << i);
    //         }
    //     }
    // }

    // else
    // {
    //     int ok = 0;
    //     s = r;
    //     o = l;
    //     a |= (1LL << p);
    //     for (int i = p - 1; i >= 0; i--)
    //     {
    //         if ((l & (1LL << i)) != 0)
    //         {
    //             a |= (1LL << i);
    //         }
    //         if ((r & (1LL << i)) != 0 && ok == 0)
    //         {
    //             ok = 1;
    //             continue;
    //         }

    //         if (ok)
    //         {
    //             if ((r & (1LL << i)) == 0)
    //             {
    //                 a |= (1LL << i);
    //             }
    //         }
    //     }
    // }

    // cout << a << " " << o << " " << s << endl;
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
