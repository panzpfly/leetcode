/*
 * @lc app=leetcode.cn id=8 lang=cpp
 *
 * [8] 字符串转换整数 (atoi)
 */

// @lc code=start
class Solution {
public:
    int myAtoi(string s) {
        int length=s.size();
        int j=0;
        long long int result=0;
        int i=0;
            while(s[i]==' ')
            {
                i++;
            }
            if(s[i]=='-')
            {
                j=1;
                i++;
                 if(s[i]<'0'||s[i]>'9')
            {
                return 0;
            }
            }
            if(s[i]=='+')
            {
                i++;
                 if(s[i]<'0'||s[i]>'9')
            {
                return 0;
            }
            }
            while('0'<=s[i]&&s[i]<='9'&&i<length&&s[i]!=' ')
            {
                result=(result)*10+(s[i]-48);
                i++;
                if(result>INT_MAX)
                {
                    if(j==1){
                        return INT_MIN;
                    }
                    else{
                        return INT_MAX;
                    }
                }
            }
            if(j==1)
            {
                result=-result;
            }
            return result;
    }
};
// @lc code=end

