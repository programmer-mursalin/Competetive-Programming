
/*

⠐⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣆⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣆⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⠃⠀⠀⠀⠀⢀⠀⠀⠀⠘⣿⣿⣆⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠜⠀⣀⣠⡴⠖⠋⠀⠀⠀⠀⢿⣿⠻⡆⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣤⠴⠞⠋⠉⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢀⡴⠞⠋⠉⣠⡆⠰⡇⠸⡇⠀⠀⠀⠀⠀⠀⠀⠸⣿⡇⠀⠀
⠀⠀⠀⠀⠀⢠⣤⡈⠀⠀⠀⠀⢻⡇⢀⣷⣀⡇⠀⠀⠀⠀⠀⠀⠀⠀⣿⣧⠀⠀
⠀⠀⠀⠀⠀⢸⡿⠗⠀⠀⠀⠀⠈⠛⠛⡉⠛⠁⠀⠀⠀⣧⠀⠀⠀⠀⢻⣿⠀⠀
⠀⠀⠀⠴⠞⠉⠀⠀⠀⡀⠀⠀⠀⠀⢀⣿⡄⠀⠀⠀⠸⣿⣧⠀⠀⠀⢸⣿⡀⠀
⠀⠀⠀⠀⠀⠀⠀⣠⣾⡇⠀⠀⠀⠀⠈⣿⣧⠀⠀⠀⠀⢻⣿⠷⠀⠀⠈⣿⡇⠀
⠀⠀⠀⠀⠀⠀⢰⡿⢻⡇⠀⠀⠀⠀⠀⢿⣿⠀⠀⠀⠀⠘⣿⡆⠀⠀⠀⣿⣧⠀
⢠⡆⠀⠀⠀⠀⣾⠃⣾⡇⠀⠀⠀⠀⠀⢸⣿⡄⠀⠀⠀⠀⢿⣿⡀⠀⠀⢸⣿⠀
⢸⡇⠀⠀⠀⢠⡿⠀⣿⠀⠀⠀⠀⠀⠀⠈⣿⣇⠀⠀⠀⠀⠘⣿⣇⠀⠀⠘⣿⡄
⢸⣧⠀⠀⠀⢸⡇⠀⣿⡀⠀⠀⠀⠀⠀⢰⣿⣿⡄⠀⠀⠀⠀⢹⡟⠀⠀⠀⣿⡇
⠈⣿⡄⠀⢀⣿⠇⠀⣿⣧⡀⠀⠀⠀⣠⣿⠋⣿⣿⣦⣀⣀⣠⣾⡇⠀⠀⠀⢿⡇
⠀⢻⣿⣶⣾⡿⠀⠀⠹⣿⣿⣶⣶⣿⣿⠋⠀⠈⠻⣿⣿⣿⡿⠟⠀⠀⠀⠀⢸⡇
⠀⠀⠙⠛⠋⠀⠀⠀⠀⠈⠛⠿⠿⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠀

*/
/*
    "BISMILLAHIR RAHMANIR RAHIM"
    ("IN THE NAME OF ALLAH, THE MOST GRACIOUS AND THE MOST MERCIFUL")
    CodeMonsterShu
    Department of Computer Science and Engineering
    Sheikh Hasina University, Netrokona, Bangladesh.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>
#define vpll vector<pair<long long, long long>>
#define pll pair<ll, ll>
#define gcd __gcd
#define inf 1e18
#define pb push_back
#define ff first
#define ss second
#define int long long
#define f(i, a, n) for (long long int i = a; i < n; i++)
#define g(i, a, n) for (long long int i = a; i >= n; i--)
#define w(t)  \
    int t;    \
    cin >> t; \
    f(case_num, 1, t + 1)
#define all(x) x.begin(), x.end()
#define y cout << "Yes" << endl
#define no cout << "No" << endl
#define ALL(x) (x).begin(), (x).end()
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pz cout << "0\n";
#define pn cout << "NO\n";
#define cheakmate return;

const int N = 1e5 + 5;
#define Mod 1000000009 + 7

// const int N = 1e7 + 10;
// const long long int arr[N];
// string s;
// bool sorted = is_sorted(s.begin(), s.end());
// if (sorted)
// {
//     cout << "Sorted" << endl;
//     return;
// }

// bool cheak(const vector<long long int> &a)
// {
//     if (is_sorted(a.begin(), a.end()))
//     {

//         return true;
//     }
//     else
//     {

//         return false;
//     }
// }

// if (is_sorted(a.begin(), a.end()))
// {
//     cout << "YES" << endl;
//     return;
// }

// if (find(a1.begin(), a1.end(), a2[m - 1]) != a1.end())
// {
//     cout << "YES" << endl;
// }
// else
// {
//     cout << "NO" << endl;
// }

// binary to decimal  bitset<8> binaryNumber(x)  8 bit  print binarynumber

//   set count

// character to integer
// int asciiValue = static_cast<int>(h);

// bool all_elements_same(const vector<int> &arr)
// {
//     if (arr.empty())
//         return true; // An empty array can be considered to have all equal elements

//     for (const int &element : arr)
//     {
//         if (element != arr[0])
//         {
//             return false;
//         }
//     }
//     return true;
// }
bool sieve(int n)
{
    if (n < 2)
        return false; // 0 and 1 are not prime

    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    return isPrime[n]; // Return whether `n` is prime
}

// vector<vector<int>> a(n, vector<int>(m));

// bool isPowerOfTwo(int x)
// {
//     return (x > 0) && ((x & (x - 1)) == 0);
// }

// int findPreviousExponent(int x)
// {a
//     if (isPowerOfTwo(x))
//     {
//         return static_cast<int>(log2(x));
//     }
//     int lowerExponent = static_cast<int>(floor(log2(x)));
//     return lowerExponent;
// }

// int binaryExponenetialIterative(int a, int b)
// {
//     int ans = 1;
//     while (b)
//     {

//         if (b & 1)
//         {
//             ans = (ans * 1ll * a) % Mod;
//         }
//         a = (a * 1ll * a) % Mod;
//         b >>= 1;
//     }
//     return ans;
// }
void solve()
{

    // 2d input
    // vector<vector< int>> d(n, vector< int>(m));
    int n;
    cin >> n;
    // vector< int> a(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    //}
    vector<vector<char>> d(2, vector<char>(n));

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> d[i][j];
        }
    }
    map<pair<int, int>, int> mp;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (d[0][i] == 'A' && mp[{0, i}] == 0)
        {
            if (i >= 1 && d[1][i - 1] == 'A' && mp[{1, i - 1}] == 0)
            {

                if (mp[{1, i}] == 0 || mp[{0, i - 1}] == 0)
                {
                    ans++;
                    mp[{0, i}] = 1;
                    mp[{1, i - 1}] = 1;

                    if (d[0][i - 1] == 'J')
                        mp[{0, i - 1}] = 1;

                    else if (d[1][i] == 'j')
                        mp[{1, i}] = 1;
                    else if (d[0][i - 1] == 'A')
                        mp[{0, i - 1}] = 1;

                    else if (d[1][i] == 'A')
                        mp[{1, i}] = 1;
                }
            }

            else if (d[1][i] == 'A' && mp[{1, i}] == 0)
            {
                if (i - 1 >= 0 && mp[{0, i - 1}] == 0 || i + 1 < n && mp[{0, i + 1}] == 0 || i - 1 >= 0 && mp[{1, i - 1}] == 0 || i + 1 < n && mp[{1, i + 1}] == 0)
                {
                    ans++;
                    mp[{0, i}] = 1;
                    mp[{1, i}] = 1;

                    if (i - 1 >= 0 && d[0][i - 1] == 'J')
                        mp[{0, i - 1}] = 1;
                    else if (i + 1 < n && d[0][i + 1] == 'J')
                        mp[{0, i + 1}] = 1;
                    else if (i - 1 >= 0 && d[1][i - 1] == 'J')
                        mp[{1, i - 1}] = 1;

                    else if (i + 1 < n && d[1][i + 1] == 'j')
                        mp[{1, i + 1}] = 1;

                    else if (i - 1 >= 0 && d[0][i - 1] == 'A')
                        mp[{0, i - 1}] = 1;
                    else if (i + 1 < n && d[0][i + 1] == 'A')
                        mp[{0, i + 1}] = 1;
                    else if (i - 1 >= 0 && d[1][i - 1] == 'A')
                        mp[{1, i - 1}] = 1;

                    else if (i + 1 < n && d[1][i + 1] == 'A')
                        mp[{1, i + 1}] = 1;
                }
            }
            else if (i < n - 1 && d[1][i + 1] == 'A' && mp[{1, i + 1}] == 0)
            {

                if (mp[{0, i + 1}] == 0 || mp[{1, i}] == 0)
                {
                    ans++;
                    mp[{0, i}] = 1;
                    mp[{1, i + 1}] = 1;

                    if (d[0][i + 1] == 'J')
                        mp[{0, i - 1}] = 1;

                    else if (d[1][i] == 'j')
                        mp[{1, i}] = 1;
                    else if (d[0][i + 1] == 'A')
                        mp[{0, i - 1}] = 1;

                    else if (d[1][i] == 'A')
                        mp[{1, i}] = 1;
                }
            }

            else if (i + 1 < n && d[0][i + 1] == 'A' && mp[{0, i + 1}] == 0)
            {
                ans++;
                mp[{0, i}] = 1;
                mp[{0, i + 1}] = 1;

                // if(mp[{1,i}]==0|| mp[] )
            }
            else if (i + 2 < n && d[0][i + 2] == 'A' && mp[{0, i + 2}] == 0)
            {
                ans++;
                mp[{0, i}] = 1;
                mp[{0, i + 2}] = 1;
            }
        }
    }
    // for (auto it : mp)
    // {
    //     cout << it.first.first << " " << it.first.second << " " << it.second << endl;
    // }
    for (int i = 0; i < n; i++)
    {
        if (mp[{1, i}] == 0 && d[1][i] == 'A')
        {
            if (i + 1 < n && mp[{1, i + 1}] == 0 && d[1][i + 1] == 'A')
            {
                ans++;
                mp[{1, i}] = 1;
                mp[{1, i + 1}] = 1;
            }
            else if (i + 2 < n && mp[{1, i + 2}] == 0 && d[1][i + 2] == 'A')
            {
                ans++;
                mp[{1, i}] = 1;
                mp[{1, i + 2}] = 1;
            }
        }
    }

    // for (auto it : mp)
    // {
    //     cout << it.first.first << " " << it.first.second << " " << it.second << endl;
    // }

    cout << ans << endl;
}
// sort(ALL(a),greater<int>());
// int maxi=*max_element(a.begin(),a.end());
//  int maxi = distance(a.begin(), max_element(a.begin(), a.end()));   // return max index
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
  :::::::::::::Author :Md.Mursalin:::::::::::::
  ===============================================*/