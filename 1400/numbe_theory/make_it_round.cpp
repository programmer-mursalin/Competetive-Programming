#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> OS;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> OMS;

const int N = (int)1e6 + 5;
const int M = (int)1e9 + 5;
const int mod = (int)1000000007;
const int max_prime = (int)1e6 + 3;
const int BLKs = (int)70000;
const int BLKspan = (int)700;

#define ll long long int
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

int main()
{
    Faster;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        ll tempN = n;
        ll cnt2 = 0, cnt5 = 0;

        while (tempN % 2 == 0)
        {
            tempN /= 2;
            cnt2++;
        }
        while (tempN % 5 == 0)
        {
            tempN /= 5;
            cnt5++;
        }

        ll valueToMultiply = 1;

        if (cnt5 > cnt2)
        {
            int p = cnt5 - cnt2;
            while (p--)
            {
                if (valueToMultiply * 2LL <= m)
                {
                    valueToMultiply *= 2LL;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            int p = cnt2 - cnt5;
            while (p--)
            {
                if (valueToMultiply * 5LL <= m)
                {
                    valueToMultiply *= 5LL;
                }
                else
                {
                    break;
                }
            }
        }

        while (true)
        {
            if (valueToMultiply * 10LL <= m)
            {
                valueToMultiply *= 10LL;
            }
            else
            {
                break;
            }
        }

        valueToMultiply = (m / valueToMultiply) * valueToMultiply;

        ll ans = n * valueToMultiply;

        cout << ans << endl;
    }
    return 0;
}
