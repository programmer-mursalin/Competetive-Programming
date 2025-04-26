#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> f;
        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            f[a[i]]++;
            if (f[a[i]] >= 4)
            {
                cout << "Yes" << endl;
                ok = true;
            }
        }

        if (ok)
        {
            cout << "Yes\n";
            continue;
        }
        vector<int> keys;
        for (auto it : f)
        {
            keys.push_back(it.first);
        }
        sort(keys.begin(), keys.end());
        int cnt2 = 0, prev = -1000000000;
        for (auto k : keys)
        {
            if (k != prev + 1)
                cnt2 = 0;
            if (f[k] >= 2)
            {
                cnt2++;
                if (cnt2 >= 2)
                {
                    ok = true;
                    break;
                }
            }
            prev = k;
        }
        cout << (ok ? "Yes" : "No") << '\n';
    }
}