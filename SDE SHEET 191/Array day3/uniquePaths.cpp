class Solution
{
public:
    int paths(int i, int j, int n, int m, vector<vector<int>> &dp)
    {

        if (i == (n - 1) && j == (m - 1))
        {
            return 1;
        }
        if (i >= n || j >= m)
            return 0;
        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }
        else
            return dp[i][j] = paths(i + 1, j, n, m, dp) + paths(i, j + 1, n, m, dp);
    }
    int uniquePaths(int m, int n)
    {
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));

        int num = paths(0, 0, m, n, dp);
        if (m == 1 && n == 1)
        {
            return num;
        }
        return dp[0][0];
    }
};