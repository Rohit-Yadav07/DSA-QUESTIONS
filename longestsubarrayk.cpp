#include "cp.cpp"
// int longestsubarrayk(vector<int> nums,int rqsum){
//     int len=0;
//     // long long sum=0;
//     int n=nums.size();
//     for (int i = 0; i < n; i++)
//     {
//           long long sum=0;
       
//         for (int j = i; j<n-1; j++)
//         { 
//                 sum+=nums[j];
            
//             if (sum==rqsum)
//             {
//                len=max(len,j+1);
//             }
//         }
        
//     }
//     return len;
// }
// int main(){
//     vector<int> a = {2, 3, 5, 1, 9};
//     long long k = 10;
//     int len = longestsubarrayk(a, k);
//     cout << "The length of the longest subarray is: " << len << "\n";
//     return 0;

// }
int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size(); // size of the array.

    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        //calculate the prefix sum till index i:
        sum += a[i];

        // if the sum = k, update the maxLen:
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        // calculate the sum of remaining part i.e. x-k:
        long long rem = sum-k;

        //Calculate the length and update maxLen:
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        //Finally, update the map checking the conditions:
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
}

int main()
{
    vector<int> a = {1, 2, 3, 1, 1, 1, 1};
    long long k = 3;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}

