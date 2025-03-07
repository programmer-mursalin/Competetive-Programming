#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        st.insert(a[i]);
    }
    int m;
    cin >> m;
    int mini = INT_MAX, l1 = 0, l2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (st.count(abs(m - a[i])) && abs(abs(m - a[i]) - a[i]) < mini)
        {
            mini = abs(abs(m - a[i]) - a[i]);
            l1 = abs(m - a[i]);
            l2 = a[i];
        }
    }

    cout << "Saymon should buy books whose prices are " << min(l1, l2) << " and " << max(l1, l2) << "." << endl;
}
