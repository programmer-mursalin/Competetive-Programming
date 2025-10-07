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
    int n, k;
    cin >> n >> k;
    string a;
    cin >> a;
    int cnt_0 = count(ALL(a), '0');
    int cnt_1 = count(ALL(a), '1');
    int cnt_2 = count(ALL(a), '2');
    string r(n, '+');
    for (int i = 0; i < cnt_0; i++)
        r[i] = '-';
    for (int i = 0; i < cnt_1; i++)
        r[n - i - 1] = '-';

    int pt = 0;
    while (cnt_2 > 0 && (pt + cnt_0) < (n - cnt_1 - pt))
    {
        r[cnt_0 + pt] = '?';
        r[n - cnt_1 - pt - 1] = '?';
        pt++;
        cnt_2--;
    }
    if (n == k)
        for (int i = 0; i < n; i++)
            r[i] = '-';
    cout << r << endl;
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
