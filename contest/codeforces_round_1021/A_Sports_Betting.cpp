#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
#define ll long long
#define gcd __gcd
#define vi vector<int>
#define ALL(x) (x).begin(), (x).end()
#define yes cout << "Yes\n";
#define pm cout << "-1\n";
#define pz cout << "0\n";
#define no cout << "No\n";
#define cheakmate return;
const int N = 1e5 + 5;
#define Mod 1000000009 + 7

void solve()
{
    int n;
    cin >> n;
    vi a(n), idx;
    map<int, int> cnt;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i], cnt[a[i]]++;
    }
    bool ok = false;
    int prev = -1e18;

    for (auto it : cnt)
    {
        int k = it.first;
        int v = it.second;
        if (v >= 4)
        {
            yes;
            return;
        }
        if (v >= 2)
        {
            if (ok && k - prev == 1)
            {
                yes;
                return;
            }
            ok = true;
        }
        else if (k - prev != 1 || v == 0)
            ok = false;
        prev = k;
    }
    no;
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
