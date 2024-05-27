//  coding ninjas
//  long sub arr sum = k for only pos elements
#include <bits/stdc++.h>
int longestSubarrayWithSumK(vector<int> a, long long k)
{
    int j = 0;
    int i = 0;
    long long sum = a[0];
    int maxLen = 0;
    while (i < a.size())
    {
        while (sum > k && j <= i)
        {
            sum = sum - a[j];
            j++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, i - j + 1);
        }
        i++;
        if (i < a.size())
        {
            sum += a[i];
        }
    }
    return maxLen;
}