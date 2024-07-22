#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int minConcatLen(string s) {
    unordered_map<char, int> freqMap;

    // Count the frequency of each character in the string
    for (char c : s) {
        freqMap[c]++;
    }

    int minFreq = INT_MAX;

    // Find the minimum frequency value
    for (auto it : freqMap) {
        minFreq = min(minFreq, it.second);
    }

    // Return the length of the frequency map
    return freqMap.size();
}

int main() {
    // Test cases
    cout << minConcatLen("xxe") << endl; // Output: 3

    return 0;
}
