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
const int N = 100005;
vector<int> seive[N];

void solve()
{

    // 2d input
    // vector<vector< int>> d(n, vector< int>(m));
    map<int, int> indx;
    int cunt = 0;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            continue;
        for (int j = 0; j < seive[arr[i]].size(); j++)
        {
            int div = seive[arr[i]][j];

            indx[div]++;
            mx = max(mx, indx[div]);
        }
    }
    if (mx == INT_MIN)
        cout << 1 << endl;
    else
        cout << mx << endl;
}
// sort(ALL(a),greater<int>());
// int maxi=*max_element(a.begin(),a.end());
//  int maxi = distance(a.begin(), max_element(a.begin(), a.end()));   // return max index

signed main()
{

    for (int i = 2; i <= N - 1; i++)
    {
        for (int j = i; j <= N - 1; j += i)
        {
            seive[j].push_back(i);
        }
    }
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    return 0;
}

/*===============================================
  :::::::::::::Author :Md.Mursalin:::::::::::::
  ===============================================*/
