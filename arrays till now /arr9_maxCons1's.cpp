class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int maxi = 0;
        int cntOne = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                cntOne++;
                maxi = max(maxi, cntOne);
            }
            if (nums[i] == 0)
            {
                cntOne = 0;
            }
        }
        return maxi;
    }
};