#include<bits/stdc++.h>
using namespace std;
 int findMaxK(vector<int>& nums) {
        int c=-1;
        for(int i=0;i<nums.size();i++){
            int n=(nums[i]*-1);
            if((find(nums.begin(),nums.end(),n)!=nums.end()) && n>c){
                c=n;
            }
        }
        return c;
 }