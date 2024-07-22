#include <bits/stdc++.h>
using namespace std;
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int> ans;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        for(auto it:ans){
            if(it.second==1){
                v.push_back(it);
            }
        }
        return v;
        
    }
int main()
{
    vector<int> nums={1,2,1,3,2,5};
    vector<int> ans= singleNumber(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i];
    }
    
    return 0;
}