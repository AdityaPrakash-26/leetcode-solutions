/*
* Accepted
* 91/91 cases passed (0 ms)
* Your runtime beats 100 % of cpp submissions
* Your memory usage beats 62.85 % of cpp submissions (6.3 MB)
*/

/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start

#include<stack> 

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        if(s.length()%2!=0){
            return false;
        }

        for(int i = 0; i < s.length(); i++){
            if(s.at(i) == '(' || s.at(i) == '{' || s.at(i) == '['){
                stk.push(s.at(i));
            } else {
                if(!stk.empty()){
                    if(s.at(i) == ')' && stk.top() =='('){
                        stk.pop();
                    } else if(s.at(i) == '}' && stk.top() =='{'){
                        stk.pop();
                    } else if(s.at(i) == ']' && stk.top() =='['){
                        stk.pop();
                    } else {
                        return false;
                    }
                } else {
                    return false;
                }
            }
        }
        if(stk.empty()){
            return true;
        } else {
            return false;
        }
    }
};
// @lc code=end

