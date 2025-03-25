#include <bits/stdc++.h>

using namespace std;

#define fastIO                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);              \
    cout.precision(numeric_limits<double>::max_digits10);

void CoderAbhi27()
{
    int n;
    cin >> n;
    vector<int> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    } // n
    set<vector<int>> pq0, pq1;
    set<pair<int, int>> st;

    auto push = [&](int X, int Y)
    {
        if (st.find({X, Y}) != st.end())
            return;
        pq0.insert({3 * X + 3 * Y + 2, X, Y});

        pq1.insert({3 * X + 3 * Y + 2, 3 * X + 1, 3 * Y + 1});
        pq1.insert({3 * X + 3 * Y + 3, 3 * X + 2, 3 * Y + 1});
        pq1.insert({3 * X + 3 * Y + 3, 3 * X + 1, 3 * Y + 2});
        pq1.insert({3 * X + 3 * Y + 6, 3 * X + 2, 3 * Y + 2});
        st.insert({X, Y});
    };

    push(0, 0);
    push(0, 1);
    push(1, 0);

    for (int i = 0; i < n; i++)
    {
        if (t[i] == 0)
        {
            auto v = *pq0.begin();
            int X = v[1], Y = v[2];
            pq1.erase({3 * X + 3 * Y + 2, 3 * X + 1, 3 * Y + 1});
            pq0.erase(v);
            cout << 3 * X + 1 << ' ' << 3 * Y + 1 << '\n';
            push(X + 1, Y);
            push(X + 2, Y);
            push(X, Y + 1);
            push(X, Y + 2);
            push(X + 1, Y + 1);
        }
        else
        {
            auto v = *pq1.begin();
            int X = v[1] / 3, Y = v[2] / 3;
            pq0.erase({3 * X + 3 * Y + 2, X, Y});
            pq1.erase(v);
            cout << v[1] << ' ' << v[2] << '\n';

            push(X + 1, Y);
            push(X + 2, Y);
            push(X, Y + 1);
            push(X, Y + 2);
            push(X + 1, Y + 1);
        }
    } // n*logn
}

// tc : O(nlogn)
// sc : O(n)

int32_t main()
{
    fastIO;

    int t = 1;
    cin >> t;
    while (t--)
    {
        CoderAbhi27();
    }
    return 0;
}