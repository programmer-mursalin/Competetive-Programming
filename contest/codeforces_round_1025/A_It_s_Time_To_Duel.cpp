#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int c = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 0)
                c++;
        }
        if (c == 0)
        {
            cout << "YES" << endl;
            continue;
        }
        int ok = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] == 0 && v[i + 1] == 0)
            {
                // cout << "YES" << endl;
                ok = 1;
                break;
            }
        }
        if (!ok)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
