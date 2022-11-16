/*
 * @lc app=leetcode.cn id=54 lang=cpp
 *
 * [54] 螺旋矩阵
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int count = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        int loop = min(n , m) / 2; // 循环次数
        int mid = loop;
        int startx = 0; // 循环开始的坐标
        int starty = 0; // 循环开始的坐标
        int offset = 1; //输出的数
        vector<int> ans(n * m , 0);
        while(loop-- > 0){
            int i = startx;
            int j = starty;
            // 从左往右
            for(;j < m - offset;j++){
                ans[count++] = matrix[i][j];
            }
            // 从上往下
            for(;i < n - offset;i++){
                ans[count++] = matrix[i][j];
            }
            // 从右往左
            for(;j > offset - 1;j--){
                ans[count++] = matrix[i][j];
            }
            // 从下往上
            for(;i > offset - 1;i--){
                ans[count++] = matrix[i][j];
            }
            offset++;
            startx++;
            starty++;
            printf("1");
        }
        // 中间数输出
        if(count < n * m){
            if(m >= n){
                for(int i = mid,j = mid;j <= m - offset;j++){
                ans[count++] = matrix[i][j];
            }
            }
            else{
                for(int i = mid,j = mid;i <= n - offset;i++){
                ans[count++] = matrix[i][j];
            }
            }
        }
        return ans;
    }
};
// @lc code=end

