/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] 赎金信
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> record;
        for(char i : magazine) {
            record[i]++;
        }

        for(char i : ransomNote) {
            if(record.find(i) == record.end()||record[i]==0) return false;
            else record[i]--;
        }
        return true;
    }
};
// @lc code=end

