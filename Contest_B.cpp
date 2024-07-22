#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m, d;
        cin >> n >> m >> d;
        
        vector<int> sellers(m);
        for (int i = 0; i < m; ++i) {
            cin >> sellers[i];
        }
        
        sort(sellers.begin(), sellers.end());
        
        int min_cookies = n;
        int min_sellers = m;
        
        for (int i = 0; i < m; ++i) {
            int eaten_cookies = max(0, sellers[i] - d + 1) + max(0, n - sellers[i]);
            min_cookies = min(min_cookies, eaten_cookies);
        }
        
        for (int i = 0; i < m; ++i) {
            int sellers_to_remove = max(0, sellers[i] - d + 1) + max(0, n - sellers[i]) - 1;
            min_sellers = min(min_sellers, sellers_to_remove);
        }
        
        cout << min_cookies << " " << min_sellers << endl;
    }
    
    return 0;
}
