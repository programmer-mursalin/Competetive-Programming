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
int reqBit(int n)
{
    int bits = 0;
    while (n > 0)
    {
        bits++;
        n >>= 1;
    }
}
void solve()
{
    vector<int> a;
    int n;
    cin >> n;

    int original = n;
    int pos = -1;

    for (int i = 31; i >= 0; i--)
    {
        if ((n & (1LL << i)) != 0)
        {
            pos = i - 1;
            break;
        }
    }

    a.push_back(n);

    for (int i = 0; i <= pos; i++)
    {
        if ((n & (1LL << i)) != 0)
        {
            n -= (1LL << i);
            a.push_back(n);
        }
    }

    while (n > 1)
    {
        n /= 2;
        a.push_back(n);
    }

    cout << a.size() << endl;
    for (int it : a)
        cout << it << " ";
    cout << endl;
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
