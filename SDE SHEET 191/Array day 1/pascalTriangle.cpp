class Solution
{
public:
    vector<int> generateRow(int n)
    {
        vector<int> temp;
        int res = 1;
        temp.push_back(res);
        for (int col = 1; col < n; col++)
        {
            res = res * (n - col);
            res = res / col;
            temp.push_back(res);
        }
        return temp;
    }
    vector<vector<int>> generate(int numRows)
    {
        vector<int> ans;
        vector<vector<int>> pascal;
        for (int i = 1; i < numRows + 1; i++)
        {
            ans = generateRow(i);
            pascal.push_back(ans);
        }
        return pascal;
    }
};
