/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:

    int t[46]={0};

    int climbStairs(int n) {
        if(n==1) {t[n]=1; return 1;}
        if(n==2) {t[n]=2; return 2;}
        else if(t[n]!=0) return t[n];
        t[n] = climbStairs(n-1)+climbStairs(n-2);
        return t[n];
    }
};
// @lc code=end

