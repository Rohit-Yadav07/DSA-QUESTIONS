/*
 * @lc app=leetcode id=137 lang=cpp
 *
 * [137] Single Number II
 */

// @lc code=start
#include <vector>
class Solution {
public: 
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for (int index = 0; index< 32; index++)
        { 
        int count=0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i]&&(1<<index)){
            count++;
        }
        }
        if (count%3==1)
        {
            ans=ans|(1<<index);
        }
        }
        return ans;
    }
};
// @lc code=end

