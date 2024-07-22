#include "cp.cpp"
vector<int> rearrangeArray(vector<int>& nums) 
{
  vector<int>ans(nums.size(),0);
      int j=0;
      int k=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0 )
            {
                ans[j]=nums[i];
                j=j+2;
            }

            else
            {
                ans[k]=nums[i];
                k=k+2;
            }
        }
        return ans;
    }
int main(){
    vector<int> nums={3,1,-2,-5,2,-4};
    vector<int> num1=rearrangeArray(nums);
    for (auto i : num1)
    {
        cout<<i<<" ";
    }
    
}