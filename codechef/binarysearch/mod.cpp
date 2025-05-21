#include <bits/stdc++.h>

using namespace std;
#define ll long long int
#define un unsigned long long
#define all(v) v.begin(), v.end()
#define pb push_back
#define endl "\n"

const ll M = 1e9 + 7;

bool chk(vector<ll> tmp, ll x, ll y)
{
    sort(tmp.rbegin(), tmp.rend());
    vector<bool> rem(x + 1, 0);
    rem[x] = 1;

    for (ll i = 0; i < tmp.size(); i++)
    {
        for (ll j = 0; j <= x; j++)
        {
            if (rem[j])
            {
                rem[j % tmp[i]] = 1;
            }
        }
    }
    return rem[y];
}

void usool()
{
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];

    ll maxim = 0;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] > y)
        {
            maxim = i + 1;
        }
        else
            break;
    }

    ll low = 0, high = maxim - 1;

    while (low < high)
    {
        ll mid = (low + high) / 2;

        vector<ll> tmp(v.begin(), v.begin() + mid + 1);
        if (chk(tmp, x, y))
            high = mid;
        else
            low = mid + 1;
    }
    ll st = maxim;
    if (chk(vector<ll>(v.begin(), v.begin() + low + 1), x, y))
        st = low;
    else if (chk(vector<ll>(v.begin(), v.begin() + high + 1), x, y))
        st = high;

    cout << maxim - low << endl;
    for (ll i = low; i < maxim; i++)
        cout << i + 1 << " ";
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        usool();
    }
    return 0;
}