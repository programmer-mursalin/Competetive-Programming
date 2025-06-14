
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
#define pii tuple<int, int, int, int>

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

void solve()
{

    int n, m, rr;
    cin >> n >> m >> rr;

    vector<vector<int>> mat(n, vector<int>(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> mat[i][j];

    int min_d = INT_MAX;
    set<tuple<int, int, int>> seen;
    priority_queue<tuple<int, int, int, int>, vector<tuple<int, int, int, int>>, greater<tuple<int, int, int, int>>> h;
    h.push(make_tuple(0, 0, -1, 0));

    while (!h.empty())
    {
        tuple<int, int, int, int> top = h.top();
        h.pop();
        int d = get<0>(top);
        int k = get<1>(top);
        int x = get<2>(top);
        int y = get<3>(top);

        if (d > min_d)
            continue;
        if (seen.count(make_tuple(k, x, y)))
            continue;
        seen.insert(make_tuple(k, x, y));

        if (x == n - 1 && (y - k + m) % m == m - 1)
        {
            min_d = min(min_d, d);
            continue;
        }

        if (x != -1)
        {
            int new_y = (y + 1) % m;
            h.push(make_tuple(d + mat[x][new_y], k, x, new_y));
        }

        if (x == n - 1)
            continue;

        for (int f = 0; f < m; ++f)
        {
            int new_y = (y - k + f + m) % m;
            int val = d + mat[x + 1][new_y] + f * rr;
            if (val > min_d)
                continue;
            h.push(make_tuple(val, f, x + 1, new_y));
        }
    }

    cout << min_d << '\n';
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
