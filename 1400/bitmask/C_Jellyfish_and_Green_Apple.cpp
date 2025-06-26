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
bool isPowerOfTwo(int n)
{
    return n > 0 && (n & (n - 1)) == 0;
}
void solve()
{
    int n, m;
    cin >> n >> m;

    if (n % m == 0)
    {
        pz cheakmate
    }

    int cnt = 0;

    while (n < m)
    {
        cnt += n;
        n *= 2;
        if (n == m)
        {
            cout << cnt << endl;
            cheakmate
        }
    }

    int ok = 0;
    int x = n % m;

    int i = 0;
    while (i < 30)
    {

        cnt += x;

        x *= 2;

        if (x == m)
        {
            cout << cnt << endl;
            cheakmate
        }
        x %= m;
        i++;
    }

    pm
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
