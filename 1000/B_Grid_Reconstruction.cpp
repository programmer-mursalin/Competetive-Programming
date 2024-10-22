#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> grid(2, vector<int>(n));

        // placing 2 in (1,1) and 1 in (2,n)
        grid[0][0] = 2;
        grid[1][n - 1] = 1;

        // alternating between even and odd numbers
        int even = 4, odd = 3;
        for (int i = 1; i < n - 1; i += 2)
        {
            grid[0][i] = even;
            grid[0][i + 1] = odd;
            grid[1][i] = odd + n - 1;
            grid[1][i + 1] = even + n - 1;
            even += 2;
            odd += 2;
        }

        // output the grid
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
