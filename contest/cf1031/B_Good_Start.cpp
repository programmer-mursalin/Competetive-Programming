#include <iostream>
using namespace std;
using ll = long long;

int main()
{

    int t;
    std::cin >> t;

    while (t--)
    {
        ll w, h, a, b;
        cin >> w >> h >> a >> b;
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        bool h_partition_possible = ((y1 - y2) % b == 0) && ((y1 != y2) || ((x1 - x2) % a == 0));
        bool v_partition_possible = ((x1 - x2) % a == 0) && ((x1 != x2) || ((y1 - y2) % b == 0));

        cout << (h_partition_possible || v_partition_possible ? "Yes\n" : "No\n");
    }

    return 0;
}
