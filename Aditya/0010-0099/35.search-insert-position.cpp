/*
Accepted
62/62 cases passed (8 ms)
Your runtime beats 8.8 % of cpp submissions
Your memory usage beats 50.07 % of cpp submissions (9.7 MB)
*/
/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */

// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0;
        int n = nums.size();
        for(i; i<n; i++){
            if(nums[i]==target){
                return i;
            } else if(nums[i]>target) {
                return i;
            }
        }

        return n;
        
    }
};
// @lc code=end

