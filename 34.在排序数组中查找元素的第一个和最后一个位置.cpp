/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        int first, last;
        vector<int> ans;
        while(left <= right)
        {
            int mid = left + (right - left)/2;
            if(nums[mid] > target)
                right = mid -1;
            else if(nums[mid] < target)
                left = mid + 1;
            else{
                int num = mid;
                while(nums[num] == target){
                    first = num;
                    num--;
                    if(num < 0)
                        break;
                }
                ans.push_back(first);
                num = mid;
                while(nums[num] == target){
                    last = num;
                    num++;
                    if(num >= nums.size())
                        break;
                }
                ans.push_back(last);
                return ans;
            }
        }
        return vector<int> {-1,-1};
    }
};
// @lc code=end

