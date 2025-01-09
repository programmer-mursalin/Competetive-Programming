#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v;
    int ans = 0;
    map<int, int> mp;

    for (int i = 2; i <= 1000; i++)
    {
        if (isPrime(i))
            v.push_back(i);
    }

    for (int i = 0; i < v.size() - 1; i++)
    {
        mp[v[i] + v[i + 1] + 1] = 1;
    }

    for (int i = 2; i <= n; i++)
    {
        if (mp[i] == 1 && isPrime(i))
        {

            ans++;
        }
    }

    if (ans >= k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    solve();
    return 0;
}
