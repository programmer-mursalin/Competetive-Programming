#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> P(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> P[i];
        }

        // Check if already sorted
        bool sorted = true;
        for (int i = 1; i < N; ++i)
        {
            if (P[i] < P[i - 1])
            {
                sorted = false;
                break;
            }
        }
        if (sorted)
        {
            cout << 0 << endl;
            continue;
        }

        // Sort the permutation to find the largest two elements
        sort(P.begin(), P.end());
        int K = P[N - 1] + P[N - 2]; // sum of the largest two elements
        cout << K << endl;
    }
    return 0;
}
