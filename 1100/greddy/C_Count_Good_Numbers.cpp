#include <bits/stdc++.h>
using namespace std;

#define int long long
#define gcd __gcd

#define ALL(x) (x).begin(), (x).end()
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pz cout << "0\n";
#define pn cout << "NO\n";
#define cheakmate return;
const int N = 1e5 + 5;-
#define Mod 1000000009 + 7

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

void solve()
{
    int l, r;
    cin >> l >> r;

    int total = r - l + 1;

    int A = r / 2 - (l - 1) / 2;
    int B = r / 3 - (l - 1) / 3;
    int C = r / 5 - (l - 1) / 5;
    int D = r / 7 - (l - 1) / 7;

    int AB = r / lcm(2, 3) - (l - 1) / lcm(2, 3);
    int AC = r / lcm(2, 5) - (l - 1) / lcm(2, 5);
    int AD = r / lcm(2, 7) - (l - 1) / lcm(2, 7);
    int BC = r / lcm(3, 5) - (l - 1) / lcm(3, 5);
    int BD = r / lcm(3, 7) - (l - 1) / lcm(3, 7);
    int CD = r / lcm(5, 7) - (l - 1) / lcm(5, 7);

    int ABC = r / lcm(lcm(2, 3), 5) - (l - 1) / lcm(lcm(2, 3), 5);
    int ABD = r / lcm(lcm(2, 3), 7) - (l - 1) / lcm(lcm(2, 3), 7);
    int ACD = r / lcm(lcm(2, 5), 7) - (l - 1) / lcm(lcm(2, 5), 7);
    int BCD = r / lcm(lcm(3, 5), 7) - (l - 1) / lcm(lcm(3, 5), 7);

    int ABCD = r / lcm(lcm(lcm(2, 3), 5), 7) - (l - 1) / lcm(lcm(lcm(2, 3), 5), 7);

    int divisible =
        (A + B + C + D) - (AB + AC + AD + BC + BD + CD) + (ABC + ABD + ACD + BCD) - ABCD;

    int not_divisible = total - divisible;

    cout << not_divisible << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}

/*===============================================
  :::::::::::::Author : Md. Mursalin ::::::::::::
  ===============================================*/
