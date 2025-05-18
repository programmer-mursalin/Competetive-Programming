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
int turn(int n, int m, int a, int b, int op)
{
    if (n == 1 && m == 1)
    {
        return op;
    }
    int m1 = (m - b), m2 = (n - a), m3 = max(m1, (b - 1)), m4 = max(m2, (a - 1));
    if ((n - m4) * m > (m - m3) * n && ((n - m4) * m > 1))
    {
        m -= m3;
    }
    else
    {
        // m -= m3;
        if ((m - m3) * n > 1)
            n -= m4;
    }
    // if (op == 0)
    // {
    //     a = (n + 1) / 2;
    //     b = (m + 1) / 2;
    // }
    a = (n + 1) / 2;
    b = (m + 1) / 2;
    op++;
    return turn(n, m, a, b, op);
}

void solve()
{

    int n, m;
    cin >> n >> m;

    int a, b;
    cin >> a >> b;

    int x1, x2, x3, x4;

    x1 = ceil(log2((double)n));
    x2 = ceil(log2((double)m));
    x3 = ceil(log2((double)min(a, n - a + 1)));

    x4 = ceil(log2((double)min(b, m - b + 1)));

    cout << min(x1 + x4, x2 + x3) + 1 << endl;
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
