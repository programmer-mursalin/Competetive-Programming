#include <bits/stdc++.h>
using namespace std;
using u64 = uint64_t;
using u128 = __uint128_t;

// Binary exponentiation modulo n
u64 binpower(u64 base, u64 e, u64 mod)
{
    u64 result = 1;
    base %= mod;
    while (e)
    {
        if (e & 1)
            result = (u128)result * base % mod;
        base = (u128)base * base % mod;
        e >>= 1;
    }
    return result;
}

// Check if 'a' is a composite witness for n
bool check_composite(u64 n, u64 a, u64 d, int s)
{
    u64 x = binpower(a, d, n);
    if (x == 1 || x == n - 1)
        return false;
    for (int r = 1; r < s; r++)
    {
        x = (u128)x * x % n;
        if (x == n - 1)
            return false;
    }
    return true;
}

// Miller-Rabin deterministic for 64-bit numbers
bool isPrime(u64 n)
{
    if (n < 2)
        return false;

    int s = 0;
    u64 d = n - 1;
    while ((d & 1) == 0)
    {
        d >>= 1;
        s++;
    }

    // 64-bit deterministic bases
    for (u64 a : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37})
    {
        if (n == a)
            return true;
        if (check_composite(n, a, d, s))
            return false;
    }
    return true;
}

int main()
{
    u64 n;
    cout << "Enter number: ";
    cin >> n;

    if (isPrime(n))
        cout << n << " is prime.\n";
    else
        cout << n << " is composite.\n";

    return 0;
}
