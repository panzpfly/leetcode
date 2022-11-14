/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根 
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        int left = 0;
        int right = 65536;
        int ans;
        while(left < right - 1){
            long long int mid = (left + right)/2;
            if(mid*mid < x)
                left = mid;
            else if(mid*mid > x)
                right = mid;
            else
                return mid;
        }
        return left;
    }
};
// @lc code=end

