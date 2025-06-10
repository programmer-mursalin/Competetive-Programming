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

    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &x : a)
        cin >> x;
    for (auto &x : b)
        cin >> x;

    int i = n - 1;
    unordered_set<int> alter1, alter2;
    for (; i >= -1; i--)
    {
        if (i == -1)
            break;
        if (a[i] == b[i])
            break;
        if (i % 2 == 0)
        {
            if (alter1.count(a[i]))
                break;
            if (alter2.count(b[i]))
                break;
            if (i + 1 < n)
                alter2.insert(a[i + 1]);
            if (i + 1 < n)
                alter1.insert(b[i + 1]);
            if (alter2.count(a[i]))
                break;
            if (alter1.count(b[i]))
                break;
        }
        else
        {
            if (alter2.count(a[i]))
                break;
            if (alter1.count(b[i]))
                break;
            if (i + 1 < n)
                alter1.insert(a[i + 1]);
            if (i + 1 < n)
                alter2.insert(b[i + 1]);
            if (alter1.count(a[i]))
                break;
            if (alter2.count(b[i]))
                break;
        }
    }

    cout << i + 1 << "\n";
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
