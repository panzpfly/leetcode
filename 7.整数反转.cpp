/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int c=0;
        int r=0;
        int num=0;
        while(x!=0)
        {
            if (r < INT_MIN / 10 || r > INT_MAX / 10) {
                return 0;
            }
            num=x%10;
            x=x/10;
            r=r*10+num;
        }
        return r;
    }
};
// @lc code=end

