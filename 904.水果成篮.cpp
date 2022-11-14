/*
 * @lc app=leetcode.cn id=904 lang=cpp
 *
 * [904] 水果成篮
 */

// @lc code=start
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> ans;
        int left = 0;
        int res = 0;
        int right = 0;
        for(right = 0;right < fruits.size();right++){
            ans[fruits[right]]++;
            while(ans.size() > 2){
                    int y = fruits[left++];
                    if(--ans[y] == 0) ans.erase(y);
            }
            res = max(res, right - left + 1);
        }
        return res;
    }
};
// @lc code=end

