#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int same = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[0])
            same++;
    }

    if (same == n)
    {
        cout << "No" << endl;
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            int h1 = a[i];
            for (int k = 0; k < n; k++)
            {
                h1 = gcd(h1, a[k]);
            }
            if (h1 != a[i])
            {
                cout << "Yes" << endl;
                for (int j = 0; j < n; j++)
                {
                    cout << (j == i ? 1 : 2) << " ";
                }
                cout << endl;
                return;
            }

            int h2 = a[i + 1];
            for (int k = 0; k < n; k++)
            {
                h2 = gcd(h2, a[k]);
            }
            if (h2 != a[i + 1])
            {
                cout << "Yes" << endl;
                for (int j = 0; j < n; j++)
                {
                    cout << (j == i + 1 ? 1 : 2) << " ";
                }
                cout << endl;
                return;
            }

            break;
        }
    }

    cout << "No" << endl;
}

int main()
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
  :::::::::::::Author : Md.Mursalin:::::::::::::
  ===============================================*/
