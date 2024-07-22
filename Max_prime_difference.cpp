#include<bits/stdc++.h>
using namespace std;
 bool isprime(int n){
    if (n<=1)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int maximumPrimeDifference(vector<int> nums){
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (isprime(nums[i]))
        {
            ans.push_back(i);
        }
        
    }
    for (auto j :ans)
    {
        cout<<j;
    }
    cout<<endl;
    
    if (ans.empty()||ans.size()==1)
    {
        return 0;
    }
    return abs(ans.front()-ans.back());
    }

int main() {
    vector<int> nums1 = {4, 2, 9, 5, 3};
    cout << maximumPrimeDifference(nums1) << endl; // Output: 3

    vector<int> nums2 = {4, 8, 2, 8};
    cout << maximumPrimeDifference(nums2) << endl; // Output: 0

    return 0;
}
