class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {

        int n = nums.size();
        int cnt1 = 0;
        int cnt2 = 0;
        int ele1;
        int ele2;
        int mini = n / 3;
        for (int i = 0; i < n; i++)
        {
            if (cnt1 == 0 && ele2 != nums[i])
            {
                cnt1 = 1;
                ele1 = nums[i];
            }

            else if (cnt2 == 0 && nums[i] != ele1)
            {
                cnt2 = 1;
                ele2 = nums[i];
            }
            else if (nums[i] == ele1)
            {
                cnt1++;
            }
            else if (nums[i] == ele2)
            {
                cnt2++;
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }

        int cnter1 = 0;
        int cnter2 = 0;
        vector<int> ls;
        for (int i = 0; i < n; i++)
        {
            if (ele1 == nums[i])
            {
                cnter1++;
            }
            if (ele2 == nums[i])
            {
                cnter2++;
            }
        }

        if (cnter1 > mini)
        {
            ls.push_back(ele1);
        }
        if (cnter2 > mini)
        {
            ls.push_back(ele2);
        }
        sort(ls.begin(), ls.end());
        return ls;
    }
};