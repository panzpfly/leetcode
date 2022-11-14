/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        int i=0;
        int j;
        int n;
        int xx=x;
        int y[100];
        if(x<0)
        {
            return false;
        }
        while(xx>0)
        {
            i++;
            y[i-1]=xx%10;
            xx=xx/10;
            n=i-1;
        }
        for(i=0;i<=n/2;i++)
        {
            if(y[i]!=y[n-i])
            {
                j=false;
                break;
            }
            if(y[i]==y[n-i])
            {
                j=true;
            }
        }
        return j;
    }
};
// @lc code=end

