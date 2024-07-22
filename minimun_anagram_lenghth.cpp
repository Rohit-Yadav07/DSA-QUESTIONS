#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool checkpos(string s, int a) {
    int n = s.length();
    // Map to store the frequency of characters in the substring
    unordered_map<char, int> freq;
    // Count the frequency of characters in the substring
    for (int i = 0; i < a; i++) {
        freq[s[i]]++;
    }
    // Check if all characters have the same frequency
    for (const auto& pair : freq) {
        if (pair.second != a / freq.size()) {
            return false;
        }
    }
    return true;
}

int minAnagramLength(string s) {
    int n = s.length();
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && checkpos(s, i)) {
            return i;
        }
    }
    return n; // If no anagram found, return the length of the string.
}

int main() {
    string s = "abba";
    cout << minAnagramLength(s) << endl; // Output: 2
    return 0;
}
