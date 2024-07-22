#include <iostream>
#include <cmath>

using namespace std;

int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        count += (num % 2);
        num /= 2;
    }
    return count;
}

int findNum(int k, int x) {
    int num = 0;
    int sumPrices = 0;

    while (sumPrices <= k) {
        int rangeSize = min(x, k - sumPrices + 1);
        int countSetBits = countSetBits(num) * rangeSize;

        sumPrices += countSetBits;
        num += x;
    }

    return num - x;
}

int main() {
    // Example 1
    int k1 = 9, x1 = 1;
    int result1 = findNum(k1, x1);
    cout << "Example 1: " << result1 << endl;  // Output: 6

    // Example 2
    int k2 = 7, x2 = 2;
    int result2 = findNum(k2, x2);
    cout << "Example 2: " << result2 << endl;  // Output: 9

    return 0;
}
