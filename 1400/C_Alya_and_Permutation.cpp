
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
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
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
#define no cout << "No" << endl
#define ALL(x) (x).begin(), (x).end()
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pz cout << "0\n";
#define pn cout << "NO\n";
#define cheakmate return;
// #define pbds tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>   //for set
// int d = st.order_of_key(pre2[n / 2]);
// #define pbds tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update>   //for multiset

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
    auto isPowerOfTwo = [](int n)
    {
        return (n > 0 && ((n & (n - 1)) == 0));
    };

    if (n == 6)
    {
        cout << 7 << endl;
        cout << "1 2 4 6 5 3  " << endl;
        cheakmate
    }

    if (n == 8)
    {
        cout << 15 << endl;
        cout << "2 4 5 1 3 6 7 8  " << endl;
        cheakmate
    }

    if (n % 2 == 1)
    {

        cout << n << endl;
        cout << 2 << " ";
        for (int i = 1; i <= n; i++)
        {
            if (i != 2)
                cout << i << " ";
        }
        cout << endl;
    }

    else
    {
        int x = (ceil(log2(n)));

        int z = (log2(n));
        vector<int> v;
        set<int> st;

        int s = 1 << z;
        v.push_back(1 << z);
        v.push_back((s - 1));
        v.push_back(s - 2);
        v.push_back((s - 2) / 2);
        v.push_back(((s - 2) / 2) / 2);

        st.insert(1 << z);
        st.insert((s - 1));
        st.insert(s - 2);
        st.insert((s - 2) / 2);
        st.insert(((s - 2) / 2) / 2);

        // int s = 1 << (z - 1);
        // v.push_back(1 << z);
        // v.push_back((s - 1));
        // v.push_back(s - 2);
        // v.push_back((s - 2) / 2);
        // v.push_back(((s - 2) / 2) / 2);

        if (isPowerOfTwo(n))
        {
            x++;
            cout << (1 << x) - 1 << endl;
        }
        else
            cout << (1 << x) - 1 << endl;

        for (int i = 1; i <= n; i++)
        {
            if (!st.count(i))
            {
                cout << i << " ";
            }
        }
        for (int i = 4; i >= 0; i--)
        {
            cout << v[i] << " ";
        }

        cout << endl;
    }
}
// priority_queue<int>pq;
// priority_queue<int,vector<int>,greater<int>>pq;
//  sort(ALL(a),greater<int>());
//  int maxi=*max_element(a.begin(),a.end());
//   int maxi = distance(a.begin(), max_element(a.begin(), a.end()));   // return max index

// sort(vec.begin(), vec.end(), [](const pair<int, int> &a, const pair<int, int> &b) {
// if (a.first != b.first) {
// return a.first < b.first; // Sort by first element (ascending)
//}
// return a.second > b.second;  // If first elements are equal, sort by second element (descending)
// });
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
