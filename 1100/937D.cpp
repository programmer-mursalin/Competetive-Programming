#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<long long>
#define vpll vector<pair<long long, long long>>
#define gcd __gcd
#define inf 1e18
#define pb push_back
#define ff first
#define ss second
#define f(i, a, n) for (long long int i = a; i < n; i++)
#define g(i, a, n) for (long long int i = a; i >= n; i--)
#define w(t)  \
    int t;    \
    cin >> t; \
    f(case_num, 1, t + 1)
#define all(x) x.begin(), x.end()
#define yes() cout << "YES" << endl
#define no() cout << "NO" << endl
const int N = 1e5 + 5;
#define Mod 1000000007

vector<int> res(N, 0);

// Function to convert a decimal number to binary string
string decimalToBinary(int n)
{
    if (n == 0)
        return "0";
    string binary = "";
    while (n > 0)
    {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    return binary;
}

// Function to check if a number consists of only binary digits (0 and 1)
bool isBinaryDigits(ll n)
{
    string s = to_string(n);
    for (char c : s)
    {
        if (c != '0' && c != '1')
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;
    if (res[n] == 1)
        yes();
    else
        no();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<ll> binaryNumbers;
    for (int i = 1; i <= 33; i++)
    {
        string s = decimalToBinary(i);
        ll x = stoll(s); // Use stoll to convert string to long long
        if (isBinaryDigits(x))
        {
            binaryNumbers.push_back(x);
            res[x] = 1;
        }
    }

    for (int i = 10; i < N; i++)
    {
        for (int j = 0; j < binaryNumbers.size(); j++)
        {
            if (i % binaryNumbers[j] == 0)
            {
                res[i] = res[i] | res[i / binaryNumbers[j]];
            }
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
