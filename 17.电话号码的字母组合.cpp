/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */

// @lc code=start
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> anss;
        //如果字符串是空的就直接输出
        if (digits.empty()) {
            return anss;
        }
        //定义一个字符对应表
        unordered_map<char,string> phoneMap{
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        string ans;
        backtrack(anss, phoneMap, digits, 0, ans);
        return anss;
    }

    void backtrack(vector<string>& anss, const unordered_map<char, string>& phoneMap, const string& digits, int index, string& ans){
        //如果写到最后一个了就把这个字符串添加到结果中
        if(index == digits.size()){
            anss.push_back(ans);
        }
        else{
            char digit = digits[index];
            const string& letters = phoneMap.at(digit);
            for (const char& letter: letters) {
                ans.push_back(letter);
                backtrack(anss, phoneMap, digits, index+1, ans);
                //添加最后一个字符后回溯到上一个字符,然后继续添加下一个字符
                ans.pop_back();
            }

        }
    }
};
// @lc code=end

