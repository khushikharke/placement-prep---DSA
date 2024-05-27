#include <bits/stdc++.h>
int getLongestSubarray(vector<int> &nums, int k)
{
    // Write your code here
    map<long long, int> preSum;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }
        long long rem = sum - k;
        if (preSum.find(rem) != preSum.end())
        {
            int len = i - preSum[rem];
            maxLen = max(maxLen, len);
        }

        if (preSum.find(sum) == preSum.end())
        {
            preSum[sum] = i;
        }
    }
    return maxLen;
}