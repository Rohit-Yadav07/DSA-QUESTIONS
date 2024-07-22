#include <bits/stdc++.h>
using namespace std;

vector<int> preprocess(const vector<int>& array) {
    int N = array.size();
    vector<int> prefix_gcd(N);
    
    prefix_gcd[0] = array[0];
    for (int i = 1; i < N; ++i) {
        prefix_gcd[i] = __gcd(prefix_gcd[i - 1], array[i]);
    }
    
    return prefix_gcd;
}

int query(const vector<int>& prefix_gcd, int left, int right) {
    if (left == 0) return prefix_gcd[right];
    return __gcd(prefix_gcd[right], prefix_gcd[left - 1]);
}

int main() {
    vector<int> array = {2,6,9};
    vector<int> prefix_gcd = preprocess(array);

    // Example queries
    cout << query(prefix_gcd, 1, 1) << endl;
    cout << query(prefix_gcd, 2, 2) << endl;
    cout << query(prefix_gcd, 2, 3) << endl;

    return 0;
}
