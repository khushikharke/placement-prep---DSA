class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        // flatten 2D to 1D
        int m = matrix.size();
        int n = matrix[0].size();
        int low = 0;
        int high = (n * m) - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            int row = mid / n;
            int col = mid % n;
            if (matrix[row][col] == target)
            {
                return true;
            }
            else if (matrix[row][col] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return false;
    }
};