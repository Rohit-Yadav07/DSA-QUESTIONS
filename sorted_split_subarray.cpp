#include<bits/stdc++.h>
using namespace std;
bool solve(vector<int>& a) {
    int n = a.size();
    vector<int> v1 = a;
    sort(v1.begin(), v1.end());
    
    vector<int> v2 = a;
    v2.insert(v2.end(), a.begin(), a.end());
    
    for (int i = 0; i < n; ++i) {
        if (equal(v1.begin(), v1.end(), v2.begin() + i)) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        if (solve(a)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}
