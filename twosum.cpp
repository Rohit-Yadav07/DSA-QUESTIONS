#include "cp.cpp"
vector<int> twoSum(vector<int>& nums, int target) {
    int n=nums.size();
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (nums[i]+nums[j]==target)
        {
            return {i,j};
        }
        } 
    }
    return {}; 
    }  
int main(){
    vector<int> nums={3,2,3};
    int target=6;
    vector<int> ans=twoSum(nums,target);
    for (int i : ans)
    {
        cout<<i;
    }
    
}