/*
    "BISMILLAHIR RAHMANIR RAHIM"
    ("IN THE NAME OF ALLAH, THE MOST GRACIOUS AND THE MOST MERCIFUL")

    Allah's Servant
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
#define yes() cout << "YES" << endl
#define no() cout << "NO" << endl
#define ALL(x) (x).begin(), (x).end()
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pn cout << "NO\n";
#define cheakmate return;

const int N = 1e5 + 5;
#define Mod 1000000007

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

bool all_elements_same(const vector<int> &arr)
{
    if (arr.empty())
        return true; // An empty array can be considered to have all equal elements

    for (const int &element : arr)
    {
        if (element != arr[0])
        {
            return false;
        }
    }
    return true;
}

// vector<vector<int>> a(n, vector<int>(m));

// bool isPowerOfTwo(int x)
// {
//     return (x > 0) && ((x & (x - 1)) == 0);
// }

// int findPreviousExponent(int x)
// {
//     if (isPowerOfTwo(x))
//     {
//         return static_cast<int>(log2(x));
//     }
//     int lowerExponent = static_cast<int>(floor(log2(x)));
//     return lowerExponent;
// }
void solve()
{

    // 2d input
    // vector<vector< int>> d(n, vector< int>(m));
    int n;
    cin >> n;
    vector<int> a(n), b, c;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (all_elements_same(a))
    {
        pm cheakmate
    }

    int maxi = *max_element(a.begin(), a.end());
    sort(ALL(a));
    for (int i = 0; i < n; i++)
    {
        if (a[i] == maxi)
        {
            c.push_back(maxi);
        }
        else
            b.push_back(a[i]);
    }
    cout << b.size() << " " << c.size() << endl;
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < c.size(); i++)
    {

        cout << c[i] << " ";
    }
    cout << endl;
}

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
