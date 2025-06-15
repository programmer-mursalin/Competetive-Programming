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
        long long w, h, a, b;
        cin >> w >> h >> a >> b;
        long long x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        // Calculate how many tiles needed in width and height (ceiling)
        long long tiles_w = (w + a - 1) / a;
        long long tiles_h = (h + b - 1) / b;

        // Check if the two placed tiles are aligned with the tile grid
        bool first_aligned = ((x1 % a) == 0) && ((y1 % b) == 0);
        bool second_aligned = ((x2 % a) == 0) && ((y2 % b) == 0);

        // Because x1, y1 could be negative, modulo in C++ can be negative,
        // fix negative modulo by adding modulus:
        auto mod_fix = [&](long long val, long long mod)
        {
            val %= mod;
            if (val < 0)
                val += mod;
            return val;
        };

        first_aligned = (mod_fix(x1, a) == 0) && (mod_fix(y1, b) == 0);
        second_aligned = (mod_fix(x2, a) == 0) && (mod_fix(y2, b) == 0);

        if (first_aligned && second_aligned)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}
