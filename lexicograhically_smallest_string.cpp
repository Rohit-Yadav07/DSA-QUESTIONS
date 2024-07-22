#include <bits/stdc++.h>
using namespace std;
long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
    int n=nums.size();
    sort(nums.begin(),nums.end());
    int count=0;
    int mid=n/2;
    if (mid==k)
    {
        return 0;
    }
   else if (nums[mid]>k)
   {
    for(int i=mid;i>=0;i--)
    {
      if (nums[i]>k)
      {
        count+=nums[i]-k;
      }
    }
    return count;
    
   }
   else
   {
    for(int i=mid;i<n;i++)
    {
        if (nums[i]<k)
        {
            count+=nums[i]-k;
        }
    }
    return count;
   } 
}
int main() {
    vector<int> nums = {1,2,3,4,5,6};
    int k = 4;
    cout<<minOperationsToMakeMedianK(nums,k);
    return 0;
}
