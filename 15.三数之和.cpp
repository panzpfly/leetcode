/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> ans;
        if (nums.size() < 3)
            return ans;
        sort(nums.begin(), nums.end());
        if (nums[0] > 0)
            return ans;
        int i = 0;
        while (i < nums.size())
        {
            if (nums[i] > 0)
                break;
            int left = i + 1, right = nums.size() - 1;
            while (left < right)
            {
                int x = nums[i];
                int y = nums[left];
                int z = nums[right];
                if (x + y + z < 0)
                {
                    left++;
                }
                else if (x + y + z > 0)
                {
                    right--;
                }
                else
                {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1])
                        left++;
                    while (left < right && nums[right] == nums[right - 1])
                        right--;
                    left++;
                    right--;
                }
            }
            while (i + 1 < nums.size() && nums[i] == nums[i + 1])
                i++;
            i++;
        }
        return ans;
    }
};
// @lc code=end
