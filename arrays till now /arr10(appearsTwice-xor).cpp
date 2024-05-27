// leetcode easy **
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        // using set, map is not allowed const space m krna h
        //    use of xor operator bit manipulation
        int a = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            a = a ^ nums[i];
        }
        return a;
    }
};