/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> record;
        vector<int> ans;
        for(int i = 0;i < nums1.size();i++) {
            record.insert(nums1[i]);
        }
        int j = 0;
        for(int i = 0;i < nums2.size();i++) {
            if(record.count(nums2[i]) != 0) {
                ans.push_back(nums2[i]);
                record.erase(nums2[i]);
        }
        }
        return ans;
    }
};
// @lc code=end

