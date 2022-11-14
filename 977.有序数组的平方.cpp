/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int len = nums.size();
        int min = 0;
        int max = len - 1;
        int res = max;
        vector<int> ans(len, 0);
        while(min <= max){
            if(pow(nums[min], 2) < pow(nums[max], 2)){
                ans[res--] = pow(nums[max--], 2);
            }
            if(pow(nums[min], 2) >= pow(nums[max], 2)){
                ans[res--] = pow(nums[min++], 2);
            }
        }
        return ans;
    }
};
// @lc code=end

