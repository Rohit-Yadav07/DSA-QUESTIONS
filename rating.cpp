#include <iostream>
#include <vector>
#include <string>

using namespace std;

pair<int, int> find_values(const string& ab) {
    for (int j = 1; j < ab.size(); ++j) {
        string a_str = ab.substr(0, j);
        string b_str = ab.substr(j);

        int a = stoi(a_str);
        int b = stoi(b_str);

        if (a > 0 && b > 0 && b > a && a_str[0] != '0' && b_str[0] != '0') {
            return make_pair(a, b);
        }
    }

    return make_pair(-1, -1);
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        string ab;
        cin >> ab;

        pair<int, int> result = find_values(ab);
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
