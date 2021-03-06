/*
Accepted
113/113 cases passed (4 ms)
Your runtime beats 47.23 % of cpp submissions
Your memory usage beats 24.75 % of cpp submissions (8.9 MB)
*/

/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for (int elem: nums){
            if (elem != val){
                nums[i] = elem;                
                i++;
            }
        }
        return i;
    }
};
// @lc code=end

