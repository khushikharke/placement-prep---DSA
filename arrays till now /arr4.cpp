// remove duplicates from sorted array
class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int n = nums.size();

        int i = 0;
        int j = 1;

        while (j < n)
        {
            // start=i;
            if (nums[i] != nums[j])
            {
                i++;
                nums[i] = nums[j];
            }
            j++;
        }
        return i + 1;
    }
};