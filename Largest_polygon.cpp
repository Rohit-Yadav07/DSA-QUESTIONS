#include"cp.cpp"
    long long largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int sum=0;
        int gotit=1;
        for (int i = 0; i < n; i++)
        {
            sum+=nums[i];
        }
        while (gotit==0)
        {
            if (nums[n]<(sum-nums[n]))
            {
                return sum;
            }
            
        }
        
    }