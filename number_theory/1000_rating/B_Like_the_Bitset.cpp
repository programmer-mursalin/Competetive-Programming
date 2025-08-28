#include <bits/stdc++.h>
using namespace std;
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
    vector<int> ans(n, 0);
    string s;
    cin >> s;

    int cnt = 0, n1 = n, j = 0, flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (j + 1 <= k)
        {
            if (s[i] == '0')
                cnt = 0;
            if (s[i] == '0' && flag == 0)
            {
                ans[i] = n1;
                n1--;
                cnt = 0;
                flag = 1;
            }
            else if (s[i] == '1')
                cnt++;
            j++;
        }
        else
        {
            if (cnt >= k)
            {
                pn cheakmate
            }
            flag = 0;
            cnt = 0;
            j = 0;
        }
    }

    if (cnt >= k)
    {
        pn cheakmate
    }

    // শেষ পর্যন্ত ফাঁকা জায়গা পূরণ
    for (int i = 0; i < n; i++)
    {
        if (ans[i] == 0)
        {
            ans[i] = n1;
            n1--;
        }
    }

    py for (int i = 0; i < n; i++)
            cout
        << ans[i] << (i + 1 == n ? '\n' : ' ');
}

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
