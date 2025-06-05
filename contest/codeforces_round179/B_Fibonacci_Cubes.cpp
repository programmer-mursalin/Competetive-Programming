#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
#define ll long long
#define gcd __gcd
#define f(i, n) for (ll i = 0; i < n; i++)

#define ALL(x) (x).begin(), (x).end()
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pz cout << "0\n";
#define pn cout << "NO\n";
#define cheakmate return;
const int N = 1e5 + 5;
#define Mod 1000000009 + 7

ll fib[12];

void solve()
{
    ll n, m;
    cin >> n >> m;
    f(i, m)
    {
        ll dim[3];
        f(j, 3)
        {
            cin >> dim[j];
        }
        sort(dim, dim + 3);
        if (dim[0] >= fib[n] && dim[1] >= fib[n] && dim[2] >= fib[n])
        {
            if ((dim[0] >= fib[n] + fib[n - 1]) || (dim[1] >= fib[n] + fib[n - 1]) || (dim[2] >= fib[n] + fib[n - 1]))
            {
                cout << 1;
            }
            else
                cout << 0;
        }
        else
            cout << 0;
    }
    cout << endl;
}

// sort(ALL(a),greater<int>());
// int maxi=*max_element(a.begin(),a.end());
//  int maxi = distance(a.begin(), max_element(a.begin(), a.end()));   // return max index

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    fib[1] = 1;
    fib[2] = 2;
    for (int i = 3; i <= 11; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
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
