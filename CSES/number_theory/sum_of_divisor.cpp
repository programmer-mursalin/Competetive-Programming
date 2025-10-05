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
#define Mod 1000000007;
int calculate(int x, int y, int n, int i)
{
    int x1 = 0, x2 = 0;
    x1 = (x * (x + 1)) % Mod;
    x1 /= 2;
    x2 = (y * (y + 1)) % Mod;
    x2 /= 2;
    x1 -= x2;
    return x1;
}
void solve()
{

    // 2d input
    // vector<vector< int>> d(n, vector< int>(m));
    //   int n;
    // cin >> n;
    // vector< int> a(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    //}
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans += n % Mod;
            ans += n % Mod;
            ans += ((calculate((n / i) - 1, ((n / (i + 1))), n, i)) * i) % Mod;
        }
    }

    cout << ans << endl;
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
