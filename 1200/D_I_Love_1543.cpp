#include <iostream>
#include <bits/stdc++.h>
#define ll int
#define MOD 1000000007
#define ull unsigned long long
#define mxx 1e18 - 1
using namespace std;

vector<ll> clockWiseTraversal(ll x, ll y, vector<vector<ll>> &v, vector<vector<ll>> &vis)
{
    vector<ll> nums;

    ll n = v.size();
    ll m = v[0].size();

    ll lastVisX = x;
    ll lastVisY = y;

    // moveLeftToRight
    for (ll i = lastVisY; i < m; i++)
    {
        if (vis[lastVisX][i] == 0)
        {
            vis[lastVisX][i] = 1;
            nums.push_back(v[lastVisX][i]);
            lastVisY = i;
        }
        else
        {
            break;
        }
    }

    // moveUpToDown
    for (ll i = lastVisX + 1; i < n; i++)
    {
        if (vis[i][lastVisY] == 0)
        {
            vis[i][lastVisY] = 1;
            nums.push_back(v[i][lastVisY]);
            lastVisX = i;
        }
        else
        {
            break;
        }
    }

    // moveRightToLeft
    for (ll i = lastVisY - 1; i >= 0; i--)
    {
        if (vis[lastVisX][i] == 0)
        {
            vis[lastVisX][i] = 1;
            nums.push_back(v[lastVisX][i]);
            lastVisY = i;
        }
        else
        {
            break;
        }
    }

    // moveDownToUp
    for (ll i = lastVisX - 1; i >= 0; i--)
    {
        if (vis[i][lastVisY] == 0)
        {
            vis[i][lastVisY] = 1;
            nums.push_back(v[i][lastVisY]);
            lastVisX = i;
        }
        else
        {
            break;
        }
    }

    return nums;
}

ll getCount(vector<ll> &nums)
{
    ll sz = nums.size();
    ll cnt = 0;
    for (ll i = 0; i < sz; i++)
    {
        if (nums[i % sz] == 1 && nums[(i + 1) % sz] == 5 && nums[(i + 2) % sz] == 4 && nums[(i + 3) % sz] == 3)
        {
            cnt++;
        }
    }
    return cnt;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> v(n, vector<ll>(m, 0));
    vector<vector<ll>> vis(n, vector<ll>(m, 0));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            char x;
            cin >> x;
            v[i][j] = int(x) - '0';
        }
    }

    vector<vector<ll>> adj;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (vis[i][j] == 0)
            {
                vector<ll> nums = clockWiseTraversal(i, j, v, vis);
                adj.push_back(nums);
            }
        }
    }

    ll ans = 0;
    for (auto child : adj)
    {
        ans += getCount(child);
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}