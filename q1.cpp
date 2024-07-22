#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        set<int> unique_elements(a.begin(), a.end());
        if (unique_elements.size() == 1) {
            cout << *unique_elements.begin() << "\n";
        } else {
            auto it = unique_elements.rbegin();
            ++it;  // Move to the second largest element
            cout << *it << "\n";
        }
    }

    return 0;
}
