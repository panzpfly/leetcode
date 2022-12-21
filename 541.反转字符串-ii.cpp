/*
 * @lc app=leetcode.cn id=541 lang=cpp
 *
 * [541] 反转字符串 II
 */

// @lc code=start
class Solution {
public:
    string reverseStr(string s, int k) {
        int first = 0;
        int last = k;
        while(last < s.size()) {
            reverse(s.begin()+first, s.begin()+last);
            first+=2*k;
            last+=2*k;
        }
        if(last - k < s.size()) reverse(s.begin()+last-k,s.end());
        return s;
    }
};
// @lc code=end

