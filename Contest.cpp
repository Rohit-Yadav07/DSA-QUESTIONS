#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        if (n == 2) {
            cout << "1 2\n";
        } else {
            cout << "2 ";
            for (int i = 4; i <= n; i += 2) {
                cout << i << " ";
            }
            for (int i = 1; i <= n; i += 2) {
                cout << i << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
