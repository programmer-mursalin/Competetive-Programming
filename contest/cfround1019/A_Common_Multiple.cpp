#include <bits/stdc++.h>

using namespace std;

void unstoppable_coder()
{

    int n;
    cin >> n;
    vector<int> vt(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> vt[i];
        mp[vt[i]]++;
    }

    cout << mp.size() << endl;
}

signed main()
{

    int t;
    cin >> t;
    while (t--)
    {
        unstoppable_coder();
    }
    return 0;
}
