#include "cp.cpp"
int missingNumber(vector<int>& nums){
    sort(nums.begin(),nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i]!=i)
        {
            return i;
        }
    }
}
int main(){
    vector<int> nums={9,6,4,2,3,5,7,0,1};
    cout<<missingNumber(nums);
    return 0;
}