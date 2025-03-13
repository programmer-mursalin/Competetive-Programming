class Solution
{
public:
    bool allzeroelement(vector<int> &v)
    {
        for (int &i : v)
        {
            if (i != 0)
                return false;
        }
        return true;
    }

    int search(string pat, string txt)
    {
        int cnt = 0;
        vector<int> counter(26, 0); // Frequency array for pattern characters

        // Initialize the frequency array with pattern characters
        for (int i = 0; i < pat.size(); i++)
        {
            counter[pat[i] - 'a']++;

        int i = 0, j = 0;

        // Sliding window approach over txt
        while (j < txt.size())
        {
            counter[txt[j] - 'a']--; // Decrease frequency for current character

            // If window size matches the pattern size
            if (j - i + 1 == pat.size())
            {
                if (allzeroelement(counter))
                {
                    cnt++; // Found a match
                }
                counter[txt[i] - 'a']++; // Slide the window: increase frequency for character at position i
                i++;                     // Move the start of the window
            }
            j++; // Move the end of the window
        }
        return cnt;
    }
};

// Driver Code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string txt, pat;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
