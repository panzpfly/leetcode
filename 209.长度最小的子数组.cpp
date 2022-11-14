/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int right = 1;
        int ans = nums.size();
        int res;
        int num = nums[left];
        if(nums.size() == 1&&nums[left] < target)
            return 0;
        else if(nums.size() == 1&&nums[left] >= target)
            return 1;
        while(right < nums.size()){
            while(num < target&&right < nums.size()){
                num = num + nums[right++];
            }
            if(num < target&&left == 0)
                return 0;
            while(num >= target&&left < right){
                num = num - nums[left++];
            }
            ans = min(right - left + 1, ans);
            
        }
        return ans;
    }
};
// @lc code=end

