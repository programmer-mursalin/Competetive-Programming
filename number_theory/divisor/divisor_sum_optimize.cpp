#include <bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    multiset<long long> divisor;
    int cnt = 0;
    for (long long i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            divisor.insert(i);
            n /= i;
            cnt++;
        }
        cnt++;
        if (n < i)
            break;
    }
    if (n > 1)
        divisor.insert(n);

    long long sum_of_divisor = 1;

    // Show prime factors
    for (auto it : divisor)
        cout << it << " ";
    cout << "\n";

    while (!divisor.empty())
    {
        long long element = *divisor.begin();
        long long e_cnt = divisor.count(element);
        divisor.erase(element);

        __int128 temp = (__int128)binpow(element, e_cnt + 1) - 1;
        temp /= (element - 1);
        sum_of_divisor = (__int128)sum_of_divisor * temp;
    }

    cout << sum_of_divisor << " " << cnt << "\n";
    return 0;
}
