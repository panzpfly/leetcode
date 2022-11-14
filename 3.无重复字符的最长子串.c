/*
 * @lc app=leetcode.cn id=3 lang=c
 *
 * [3] 无重复字符的最长子串
 */
#include <math.h>
// @lc code=start


int lengthOfLongestSubstring(char * s){
    // 哈希集合，记录每个字符是否出现过
    int last[128];
    for(int i=0;i<128;i++)
    {
        last[i]=-1;
    }
    int n=strlen(s);
    printf("%d\n",n);
    int res = 0;
    int start = 0;
    for(int i = 0; i < n; i++)
    {
        int index=(int)s[i];
        printf("%d\n",index);
        start = fmax(start, last[index]+1);
        res = fmax(res,i-start+1);
        last[index]=i;
    }
    return res;
}
// @lc code=end
