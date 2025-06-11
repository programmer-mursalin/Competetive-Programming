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
#define vi vector<ll>
#define cheakmate return;
const int N = 1e5 + 5;
#define Mod 1000000009 + 7

void solve()
{

    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> A(n, vector<ll>(m));
    string s;
    cin >> s;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    vi R(n), C(m);
    for (ll i = 0; i < n; i++)
    {
        ll sum = 0;
        for (ll j = 0; j < m; j++)
        {
            sum += A[i][j];
        }
        R[i] = sum;
    }
    for (ll j = 0; j < m; j++)
    {
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += A[i][j];
        }
        C[j] = sum;
    }
    ll x = 0, y = 0;
    ll cnt = 0;
    while (cnt < n + m - 1)
    {
        // DEBUG(x);
        // DEBUG(y);
        if (s[cnt] == 'D')
        {
            A[x][y] = -R[x];
            R[x] += A[x][y];
            C[y] += A[x][y];
            x++;
        }
        else
        {
            A[x][y] = -C[y];
            R[x] += A[x][y];
            C[y] += A[x][y];
            y++;
        }
        cnt++;
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
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
