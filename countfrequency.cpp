#include <iostream>
#include <vector>
#include <unordered_map>

int maxFrequency(const std::vector<int>& nums) {
    std::unordered_map<int, int> FC;
    int Mf = 0;

    for (int num : nums) {
        FC[num]++;
        Mf = std::max(Mf, FC[num]);
    }

    int mfe = 0;
    for (const auto& entry : FC) {
        if (entry.second == Mf) {
            mfe += entry.second;
        }
    }

    return mfe;
}

int main() {
    // Example 1
    std::vector<int> nums1 = {1, 2, 2, 3, 1, 4};
    int result1 = maxFrequency(nums1);
    std::cout << "Example 1: " << result1 << std::endl;  // Output: 4

    // Example 2
    std::vector<int> nums2 = {1, 2, 3, 4, 5};
    int result2 = maxFrequency(nums2);
    std::cout << "Example 2: " << result2 << std::endl;  // Output: 5

    return 0;
}
