/*
    "BISMILLAHIR RAHMANIR RAHIM"
    ("IN THE NAME OF ALLAH, THE MOST GRACIOUS AND THE MOST MERCIFUL")
    CodeMonsterShu
    Department of Computer Science and Engineering
    Sheikh Hasina University, Netrokona, Bangladesh.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long

bool mursalin(int k, vector<int> &b, int n, int x)
{
    int l = b[0] - k, h = b[0] + k;
    for (int i = 1; i < n; i++)
    {
        int cur_l = max(b[i] - k, l);     // Adjust the lower bound
        int cur_h = min(b[i] + k, h + x); // Adjust the upper bound based on previous bounds and x
        if (cur_l > cur_h)
            return false; // If bounds are invalid, return false
        l = cur_l;
        h = cur_h;
    }
    return true;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);

    // Input array
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Binary search for the minimum k
    int l = 0, r = 2e9, ans = r;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (mursalin(mid, a, n, x))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    // Reconstruct array c based on the minimum k found
    vector<int> c(n);
    c[0] = a[0] + ans;

    for (int i = 1; i < n; i++)
    {
        int l = max(c[i - 1], a[i] - ans);     // Lower bound for the current element
        int h = min(c[i - 1] + x, a[i] + ans); // Upper bound based on the previous element and x
        c[i] = h;                              // Choose the upper bound
    }

    // Calculate maximum difference
    int md = 0;
    for (int i = 0; i < n; i++)
    {
        md = max(md, abs(c[i] - a[i]));
    }

    // Output the result
    cout << md << endl;
    for (int i = 0; i < n; i++)
    {
        cout << c[i] << (i < n - 1 ? ' ' : '\n');
    }
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
