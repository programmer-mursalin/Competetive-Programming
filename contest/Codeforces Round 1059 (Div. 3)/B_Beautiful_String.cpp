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
bool isPal(string s)
{
    int l = 0, r = s.size() - 1;
    while (l < r)
    {
        if (s[l] != s[r])
            return false;
        l++;
        r--;
    }
    return true;
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
    string s;
    cin >> s;

    if (isPal(s))
    {
        pz cheakmate
    }

    string p = "";
    vector<int> c;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            c.push_back(i + 1);
        else
            p += s[i];
    }

    if (isPal(p))
    {
        cout << c.size() << endl;
        for (auto it : c)
            cout << it << " ";
        cout << endl;

        cheakmate
    }
    string q = "";
    vector<int> d;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            d.push_back(i + 1);
        else
            q += s[i];
    }

    if (isPal(q))
    {
        cout << d.size() << endl;
        for (auto it : d)
            cout << it << " ";
        cout << endl;

        cheakmate
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
