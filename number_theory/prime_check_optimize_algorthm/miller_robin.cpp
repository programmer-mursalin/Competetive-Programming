#include <bits/stdc++.h>
using namespace std;

using ull = unsigned long long;
using u128 = __uint128_t;

// fast modular exponentiation
ull mod_pow(ull base, ull exp, ull mod)
{
    ull res = 1;
    base %= mod;
    while (exp > 0)
    {
        if (exp & 1)
            res = (u128)res * base % mod;
        base = (u128)base * base % mod;
        exp >>= 1;
    }
    return res;
}

// witness check
bool witness(ull n, ull cand, ull d, int r)
{
    ull x = mod_pow(cand, d, n);
    if (x == 1 || x == n - 1)
        return false;

    for (int i = 1; i < r; i++)
    {
        x = (u128)x * x % n;
        if (x == n - 1)
            return false;
    }
    return true;
}

// Miller-Rabin test (deterministic for 64-bit)
bool prime_check(ull n)
{
    if (n < 2)
        return false;

    int r = 0;
    ull d = n - 1;
    while ((d & 1) == 0)
    {
        d >>= 1;
        r++;
    }

    // bases for 64-bit numbers
    static const ull test_bases[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    for (ull a : test_bases)
    {
        if (n == a)
            return true;
        if (n % a == 0)
            return false;
        if (witness(n, a, d, r))
            return false;
    }
    return true;
}

int main()
{
    ull num;
    cout << "Input a number: ";
    cin >> num;

    if (prime_check(num))
        cout << num << " is a prime number.\n";
    else
        cout << num << " is a composite number.\n";

    return 0;
}
