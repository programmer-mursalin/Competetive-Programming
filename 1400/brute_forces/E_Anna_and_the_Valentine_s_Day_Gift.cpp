#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
#define ll long long

// using namespace __gnu_pbds;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll, ll> umll;
typedef map<ll, ll> mll;
#define gcd __gcd

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pn cout << "NO\n";
#define pimp cout << "IMPOSSIBLE\n";
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()
#define cheakmate return;
const int N = 1e5 + 5;
#define Mod 1000000009 + 7
ll countZeroes(ll n)
{
    ll c = 0;
    while (n > 0)
    {
        if (n % 10 != 0)
            break;
        c++;
        n /= 10;
    }
    return c;
}
ll countDigits(ll n)
{
    ll c = 0;
    while (n > 0)
    {
        c++;
        n /= 10;
    }
    return c;
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    vll v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll sum = 0;
    vll z(n);
    for (int i = 0; i < n; i++)
    {
        sum += countDigits(v[i]);
        z[i] = countZeroes(v[i]);
    }
    sort(z.begin(), z.end(), greater<ll>());
    for (int i = 0; i < n; i += 2)
    {
        sum -= z[i];
    }
    if (sum >= (m + 1))
    {
        cout << "Sasha\n";
    }
    else
    {
        cout << "Anna\n";
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
