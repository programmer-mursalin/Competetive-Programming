#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 10000000;
vector<bool> is_prime(MAX_N + 1, true);
vector<int> primes;

void sieve()
{
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= MAX_N; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= MAX_N; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= MAX_N; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
        }
    }
}

int count_subtractorizations(int N)
{
    int count = 0;
    for (int prime : primes)
    {
        if (prime > N)
            break;
        int diff = N - prime;
        if (diff >= 2 && is_prime[diff])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    sieve();

    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        int N;
        cin >> N;
        int result = count_subtractorizations(N);
        cout << "Case #" << t << ": " << result << endl;
    }

    return 0;
}
