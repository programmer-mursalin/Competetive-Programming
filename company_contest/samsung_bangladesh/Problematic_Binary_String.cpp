/*
BISMILLAHIR RAHMANIR RAHIM
Author  : Md.Mursalin
Dept    : CSE
*/

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

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string s1 = "", s2 = "";
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            s1.push_back('0');
            s2.push_back('1');
        }
        else
        {
            s1.push_back('1');
            s2.push_back('0');
        }
    }

    string temp = s;
    int c1 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (temp[i] != s1[i])
        {
            c1++;
            if (temp[i] == '0')
                temp[i] = '1';
            else
                temp[i] = '0';

            if (i + 1 < n)
            {
                if (temp[i + 1] == '0')
                    temp[i + 1] = '1';
                else
                    temp[i + 1] = '0';
            }

            if (i + 2 < n)
            {
                if (temp[i + 2] == '0')
                    temp[i + 2] = '1';
                else
                    temp[i + 2] = '0';
            }
        }
    }

    bool ok1 = true;
    for (int i = 0; i < n; i++)
        if (temp[i] != s1[i])
            ok1 = false;

    temp = s;
    int c2 = 0;
    for (int i = n - 1; i > 0; i--)
    {
        if (temp[i] != s1[i])
        {
            c2++;
            if (temp[i] == '0')
                temp[i] = '1';
            else
                temp[i] = '0';

            if (i - 1 >= 0)
            {
                if (temp[i - 1] == '0')
                    temp[i - 1] = '1';
                else
                    temp[i - 1] = '0';
            }

            if (i - 2 >= 0)
            {
                if (temp[i - 2] == '0')
                    temp[i - 2] = '1';
                else
                    temp[i - 2] = '0';
            }
        }
    }

    bool ok2 = true;
    for (int i = 0; i < n; i++)
        if (temp[i] != s1[i])
            ok2 = false;

    if (!ok1 && !ok2)
        pm else if (!ok1) cout << c2 << "\n";
    else if (!ok2)
        cout << c1 << "\n";
    else
        cout << min(c1, c2) << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}

/*===============================================
  :::::::::::::Author : Md.Mursalin :::::::::::
  ===============================================*/
