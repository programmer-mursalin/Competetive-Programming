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

    long long n, rK, cK, rD, cD;
    cin >> n >> rK >> cK >> rD >> cD;

    long long ans1 = 0, ans2 = 0;

    if (rK < rD)
        ans1 = rD;
    else if (rK > rD)
        ans1 = n - rD;
    else
        ans1 = 0;

    if (cK < cD)
        ans2 = cD;
    else if (cK > cD)
        ans2 = n - cD;
    else
        ans2 = 0;

    cout << max(ans1, ans2) << "\n";
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
