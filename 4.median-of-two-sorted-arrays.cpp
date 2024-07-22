/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
#include<bits/stdc++.h>
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;
        set<int> set1;
        for (int i = 0; i < nums1.size; i++)
        {
            set1.insert(nums[i]);
        }
        for (int i = 0; i < nums2; i++)
        {
            set1.insert(nums2[i]);
        }
        vector<int> ans2;
        for (auto i : set1)
        {
            ans2.push_back(i);
        }
        int n=ans2.size();
        if (n%2==0)
        {
            ans=(ans2[n/2]+ans2[(n/2)+1])/2;
            return ans;
        }
        else
        {
            ans=ans2[ceil(n/2)];
            return ans;
        }
        
        
        
        
        
        

        
    }
};
// @lc code=end

