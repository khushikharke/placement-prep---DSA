// left rotate, right rotate, 1 steps/k steps
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> temp(k);
        if (n == 0)
            return;
        k = k % n;
        if (k > n)
        {
            return;
        }
        //  temp = [5,6,7]
        for (int i = n - k; i < n; i++)
        {
            temp[i - n + k] = nums[i];
        }
        // 1234567-> 123 1234

        for (int i = n - k - 1; i >= 0; i--)
        {
            nums[i + k] = nums[i];
        }

        for (int i = 0; i < k; i++)
        {
            nums[i] = temp[i];
        }
    }
};