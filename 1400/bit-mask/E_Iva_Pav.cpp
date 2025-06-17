#include <iostream>
#include <vector>
using namespace std;

// Function to solve each test case
void solve()
{
    int n;
    cin >> n; // Number of elements

    vector<int> a(n); // Array
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // Input elements
    }

    // Preprocessing for each bit position
    vector<vector<int>> bitCount(32, vector<int>(n, 0));

    for (int bit = 0; bit < 32; bit++)
    {
        for (int i = 0; i < n; i++)
        {
            // Check if the 'bit'-th bit is set in a[i]
            if ((a[i] & (1 << bit)) == 0)
            {
                bitCount[bit][i] = 1;
            }

            // Add previous value to make prefix sum
            if (i > 0)
            {
                bitCount[bit][i] += bitCount[bit][i - 1];
            }
        }
    }

    int q;
    cin >> q; // Number of queries

    while (q--)
    {
        int l, k;
        cin >> l >> k; // 1-based index
        l--;           // Convert to 0-based index

        int low = l;
        int high = n - 1;
        int answer = -1; // If no valid r found

        while (low <= high)
        {
            int mid = (low + high) / 2;
            int andValue = 0;

            for (int bit = 0; bit < 32; bit++)
            {
                int count;

                if (l > 0)
                {
                    count = bitCount[bit][mid] - bitCount[bit][l - 1];
                }
                else
                {
                    count = bitCount[bit][mid];
                }

                int length = mid - l + 1;

                if (count == 0)
                {
                    andValue = andValue | (1 << bit);
                }
            }

            if (andValue >= k)
            {
                answer = mid;  // Update answer
                low = mid + 1; // Try for bigger range
            }
            else
            {
                high = mid - 1;
            }
        }

        // If no answer found, print -1
        if (answer == -1)
        {
            cout << -1 << " ";
        }
        else
        {
            cout << (answer + 1) << " "; // Convert back to 1-based index
        }
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        solve(); // Solve each test case
    }

    return 0;
}
