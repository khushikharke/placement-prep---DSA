class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        // moore's voting algorithm
        int n = nums.size();
        int ele;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (cnt == 0)
            {
                cnt = 1;
                ele = nums[i];
                //   starting only
            }
            else if (nums[i] == ele)
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
        }
        int cnt1 = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == ele)
            {
                cnt1++;
            }
        }

        if (cnt1 > n / 2)
        {
            return ele;
        }
        return -1;
    }
};