#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
int N, K, A[5000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    for (; T--;)
    {
        cin >> N >> K;
        for (int i = 0; i < N; i++)
            cin >> A[i];
        long long sum = 0;
        if (K >= 2)
        {
            sort(A, A + N);
            for (int i = 0; i <= K; i++)
                sum += A[N - i - 1];
        }

        else
        {
            int mx = 0;
            for (int i = 0; i < N - 1; i++)
                for (int j = 0; j < N; j++)
                    if (i != j)
                        mx = max(mx, A[i] + A[j]);
            sum = mx;
        }
        cout << sum << "\n";
    }
}
