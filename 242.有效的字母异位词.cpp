/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char, int> smap;
        unordered_map<char, int> tmap;
        for(int i = 0;i < s.size();i++) {
            smap[s[i]]++;
            tmap[t[i]]++;
        }
        for(int i = 0;i < s.size();i++) {
            if(smap[s[i]] != tmap[s[i]]) return false;
        }
        return true;
    }
};
// @lc code=end

