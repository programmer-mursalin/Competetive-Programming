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
#define Mod 1000000009 + 7
const ll MOD = 998244353;
const int N = 1e5 + 5;
int st[N][20];
int logVal[N];
vector<int> computeLog(int n)
{
    vector<int> logVal(n + 1);
    logVal[1] = 0;
    for (int i = 2; i <= n; i++)
        logVal[i] = logVal[i / 2] + 1;
    return logVal;
}

// Build Sparse Table and return it
vector<vector<int>> buildSparseTable(vector<int> a, int n, vector<int> &logVal)
{
    vector<vector<int>> st(n, vector<int>(20));
    for (int i = 0; i < n; i++)
        st[i][0] = a[i];

    for (int j = 1; (1 << j) <= n; j++)
    {
        for (int i = 0; i + (1 << j) <= n; i++)
        {
            st[i][j] = max(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
        }
    }
    return st;
}
int queryMax(int l, int r, const vector<vector<int>> &st, const vector<int> &logVal)
{
    int j = logVal[r - l + 1];
    return max(st[l][j], st[r - (1 << j) + 1][j]);
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n), d(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    c = b;
    reverse(ALL(c));

    for (int i = 0; i < n; i++)
    {
        d[i] = ((1LL << c[i]) + (1LL << a[i])) % MOD;
    }

    vector<int> logVal = computeLog(n);
    vector<vector<int>> st = buildSparseTable(d, n, logVal);

    for (int i = 0; i < n; i++)
    {
        int l = i / 2;
        int r = i;
        int result = queryMax(l, r, st, logVal);
        cout << result << " ";
    }
    cout << '\n';
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
