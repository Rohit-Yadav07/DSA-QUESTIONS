#include"cp.cpp"
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        int n = nums.size();

        for (int i = 0; i < n; i++) { 
            int require = target - nums[i];
            if (numMap.count(require)) {
                return {numMap[require], i};
            }
            numMap[nums[i]] = i;
        }

        return {}; // No solution found
    }