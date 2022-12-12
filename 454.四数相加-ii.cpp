/*
 * @lc app=leetcode.cn id=454 lang=cpp
 *
 * [454] 四数相加 II
 */

// @lc code=start
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> map;
        int n = nums1.size();
        int ans = 0;
        for(int i:nums1) {
            for(int j:nums2) {
                map[i + j]++;
            }
        }
        for(int i:nums3) {
            for(int j:nums4) {
                if(map.find(-i-j) != map.end()){
                    ans = ans + map[-i-j];
                }
            }
        }
        return ans;
    }
};
// @lc code=end

