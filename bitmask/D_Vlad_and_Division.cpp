#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    multiset<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = n;
    int allOn = (1LL << 31) - 1;

    for (int i = 0; i < n; i++)
    {
        int x = a[i] ^ allOn;
        if (s.count(x))
        {
            s.erase(s.find(x));
            ans--;
        }
        else
        {
            s.insert(a[i]);
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

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
