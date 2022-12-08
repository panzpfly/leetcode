/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> record;
        while(n != 1) {
            int sum = 0;
            while(n != 0) {
                sum = sum + (n % 10) * (n % 10);
                n = n/10;
            }

            if(record.find(sum) == record.end()) {
                record.insert(sum);
            }
            else {
                return false;
            }
            n = sum;
        }
    return true;
    }
};
// @lc code=end

