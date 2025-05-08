#include <iostream>
#include <vector>

using namespace std;

const int LIM = 100; // Set the limit for prime generation

vector<int> basePrimes;
vector<int> primesUpTo1e9;

void simpleSieve()
{
    vector<bool> isPrime(LIM + 1, true);
    for (int p = 2; p * p <= LIM; p++)
    {
        if (isPrime[p])
        {
            for (int i = p * p; i <= LIM; i += p)
                isPrime[i] = false;
        }
    }

    for (int p = 2; p <= LIM; p++)
    {
        if (isPrime[p])
        {
            basePrimes.push_back(p);
            primesUpTo1e9.push_back(p);
        }
    }

    // Printing all the prime numbers
    cout << "Prime numbers up to " << LIM << " are: " << endl;
    for (int prime : basePrimes)
    {
        cout << prime << " ";
    }
    cout << endl;
}

int main()
{
    simpleSieve();
    return 0;
}
