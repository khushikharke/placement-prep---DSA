// brute 0{n2}

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int j;
        vector<int> temp;
        for (int i = 0; i < nums.size(); i++)
        {
            int j = i + 1;
            while (j < nums.size())
            {
                if (nums[i] + nums[j] == target)
                {
                    temp.push_back(i);
                    temp.push_back(j);
                    break;
                }
                j++;
            }
        }
        return temp;
    }
};

// optimised is do hashing used map
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> temp;
        map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            int a = nums[i];
            int rem = target - a;
            if (mp.find(rem) != mp.end())
            {
                temp.push_back(mp[rem]);
                temp.push_back(i);
                break;
            }

            mp[a] = i;
        }
        return temp;
    }
};
