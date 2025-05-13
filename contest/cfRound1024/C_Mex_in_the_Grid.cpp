#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cheakmate return;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> d(n, vector<int>(n));

    int st = n * n - 1; // Start from the maximum value
    int x = n / 2;      // Start from the middle
    int y = n / 2;

    if (n % 2 == 0)
    {
        x--; // Adjust if n is even
        y--; // Adjust if n is even
    }

    d[x][y] = st--; // Set the center element

    int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}}; // Right, Down, Left, Up
    int dir = 0;                                               // Start with moving to the right
    int len = 1;                                               // Initial step length for the spiral

    while (st >= 0)
    {
        for (int i = 0; i < len; i++)
        {
            x += directions[dir][0];
            y += directions[dir][1];
            d[x][y] = st--;
        }

        dir = (dir + 1) % 4; // Change direction (right -> down -> left -> up)

        if (dir == 0 || dir == 2)
        {
            len++; // Increase the length after two directions (right and down, left and up)
        }
    }

    // Output the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
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
