#include <bits/stdc++.h>
using namespace std;
void kichhuparina()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[i] = x;
        if (i > 0)
            if (abs(v[0]) > abs(v[i]))
                cnt++;
    }

    int mean_val = ceil((n - 1) / 2.0);
    if (cnt <= mean_val)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        kichhuparina();
    }
    return 0;
}
