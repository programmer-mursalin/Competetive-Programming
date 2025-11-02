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
struct cmp
{
    bool operator()(pair<pair<int, int>, int> &a, pair<pair<int, int>, int> &b)
    {
        return a.first.first < b.first.first;
    }
};
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n), ans;
    int isZero = 0, isEnd = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
            isZero = 1;
        if (a[i] == x)
            isEnd = 1;
    }

    sort(ALL(a));
    int p = 1;
    priority_queue<pair<pair<int, int>, int>, vector<pair<pair<int, int>, int>>, cmp> pq;

    if (!isZero)
        pq.push({{a[0], 0}, 0});
    if (!isEnd)
        pq.push({{x - a[n - 1], 1}, x});

    for (int i = 0; i < n - 1; i++)
    {
        if ((a[i + 1] - a[i]) == 1)
        {
            pq.push({{0, 1}, a[i]});

            pq.push({{0, 0}, a[i + 1]});
            continue;
        }
        int div = (a[i + 1] - a[i]) / 2;
        int d = (a[i + 1] - a[i]) + 1 / 2;

        pq.push({{div, 1}, a[i] + div});
        int p = a[i + 1] - (a[i] + div + 1);
        pq.push({{p, 0}, (a[i] + div) + 1});
    }

    map<int, int> mp;
    while (k && !pq.empty())
    {
        auto inc = pq.top();

        int dist = inc.first.first;
        int dir = inc.first.second;
        int pos = inc.second;
        pq.pop();
        if (mp[pos] == 1)
        {

            continue;
        }
        ans.push_back(pos);

        if (dir == 1)
            pq.push({{dist - 1, 1}, pos - 1});
        else if (dir == 0)
            pq.push({{dist - 1, 0}, pos + 1});
        mp[pos] = 1;
        k--;
    }

    for (auto it : ans)
        cout << it << " ";
    cout << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

/*===============================================
  :::::::::::::Author :Md.Mursalin:::::::::::::
  ===============================================*/