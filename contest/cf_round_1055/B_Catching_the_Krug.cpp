#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        long long n, rK, cK, rD, cD;
        cin >> n >> rK >> cK >> rD >> cD;

        long long dx = abs(rK - rD);
        long long dy = abs(cK - cD);

        // Krug-এর survival time
        long long survival = max(dx, dy);

        cout << survival << "\n";
    }

    return 0;
}
