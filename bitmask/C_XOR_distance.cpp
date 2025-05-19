#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
#define int long long
#define LL long long
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
    long long a, b, r;
    cin >> a >> b >> r;

    if (a < b)
        swap(a, b);
    int pos = -1;
    for (int i = 63; i >= 0; i--)
    {
        if ((a & (1LL << i)))
        {
            pos = i;
            break;
        }
    }
    // cout << pos << endl;
    // cout << n << " " << m << endl;
    // ;
    long long point = 0;

    for (int i = pos - 1; i >= 0; i--)
    {
        if ((a & (1LL << i)) && !(b & (1LL << i)))
        {
            if (point + (1LL << i) <= r)
            {
                a -= ((1LL << i));
                b += ((1LL << i));
                point += (1LL << i);
            }
        }
    }

    // cout << n << " " << m;

    cout << abs(a - b) << endl;
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