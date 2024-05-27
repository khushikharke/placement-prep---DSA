class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int sum = 0;
        int sum_n = 0;
        int n = nums.size();
        sum_n = (n * (n + 1)) / 2;
        for (auto it : nums)
        {
            sum += it;
        }

        return sum_n - sum;
    }
};