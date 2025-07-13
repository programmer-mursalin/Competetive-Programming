#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
#define int long long
#define gcd __gcd

#define ALL(x) (x).begin(), (x).end()
#define py cout << "Yes\n";
#define pm cout << "-1\n";
#define pz cout << "0\n";
#define pn cout << "No\n";
#define cheakmate return;
const int N = 1e5 + 5;
#define Mod 1000000009 + 7

void solve()
{
    int n, k;
    cin >> n >> k;
    string s, t;
    cin >> s >> t;

    vector<int> cnt_s(26), cnt_t(26);
    for (int i = 0; i < n; i++)
    {
        cnt_s[s[i] - 'a']++;
        cnt_t[t[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnt_s[i] < cnt_t[i])
        {
            pn cheakmate
        }
        cnt_s[i] -= cnt_t[i];
        if (cnt_s[i] % k != 0)
        {
            pn cheakmate
        }
        if (i + 1 < 26)
            cnt_s[i + 1] += cnt_s[i];
    }

    py
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
