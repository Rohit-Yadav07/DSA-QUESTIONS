#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumOperationsToMakeKPeriodic(string word, int k) {
        int n = word.length();
        if (n % k != 0) {
            return -1;
        }

        unordered_map<string,int> dsub;
        for (int i = 0; i < n; i += k) {
            dsub[word.substr(i, k)]++;
        }

        int minx = INT_MAX;
        for (auto i : dsub) {
            int x = n / k - i.second;
            minx = min(minx, x);
        }

        return minx;
    }
};

int main() {
    Solution sol;
    std::string word1 = "leetcodeleet";
    int k1 = 4;
    std::cout << sol.minimumOperationsToMakeKPeriodic(word1, k1) << std::endl;  // Output: 1

    std::string word2 = "leetcoleet";
    int k2 = 2;
    std::cout << sol.minimumOperationsToMakeKPeriodic(word2, k2) << std::endl;  // Output: 3

    return 0;
}
