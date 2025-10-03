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
multiset<int> cnt_prime_divisor(int n)
{
    multiset<int> v;
    int cnt = 0;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            v.insert(i);
            n /= i;
        }
    }
    if (n > 1)
        v.insert(n);

    return v;
}

void solve()
{

    // 2d input
    // multiset<multiset< int>> d(n, multiset< int>(m));
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int p = 0, pos = -1, ans = 0;

    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i + 1] < a[i])
        {

            pos = i + 1;
            break;
        }
    }
    if (pos == -1)
    {
        pz cheakmate
    }

    multiset<int> c = cnt_prime_divisor(a[pos]);
    // cout << *c.begin() << endl;

    for (int i = pos - 1; i >= 0; i--)
    {

        multiset<int> curr = cnt_prime_divisor(a[i]);
        int x = 0, l = 0;

        for (auto it : c)
        {
            x += it;
        }
        vector<int> ms;
        for (auto it1 = curr.begin(); it1 != curr.end(); ++it1)
        {
            if (*it1 + l <= x)
            {
                l += *it1;
                ms.push_back(*it1);
            }
            for (auto it2 = next(it1); it2 != curr.end(); ++it2)
            {
                if (*it2 + l <= x)
                {
                    l += *it2;
                    ms.push_back(*it2);
                }
                else
                    ans++;
            }
        }

        c.clear();
        for (int k : ms)
            c.insert(k);
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
