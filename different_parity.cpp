#include <iostream>
#include <vector>
#include <string>

using namespace std;

long long sumDigitDifferences(const vector<int>& nums) {
    int n = nums.size();
    if (n < 2) return 0;
    int nums_dig = to_string(nums[0]).size();
    vector<vector<int>> count(nums_dig, vector<int>(10, 0));
    for (int num : nums) {
        string str = to_string(num);
        for (int i = 0; i < nums_dig; ++i) {
            count[i][str[i] - '0']++;
        }
    }

    long long diff = 0;
    for (int i = 0; i < nums_dig; ++i) {
        int cum_sum = 0;
        for (int d = 0; d < 10; ++d) {
            int count_d = count[i][d];
            diff += count_d * (n - count_d) - count_d * cum_sum;
            cum_sum += count_d;
        }
    }

    return diff;
}

int main() {
    // Test case 1
    vector<int> nums1 = {13, 23, 12};
    cout << sumDigitDifferences(nums1) << endl;  // Output: 4

    // Test case 2
    vector<int> nums2 = {10, 10, 10, 10};
    cout << sumDigitDifferences(nums2) << endl;  // Output: 0

    return 0;
}
