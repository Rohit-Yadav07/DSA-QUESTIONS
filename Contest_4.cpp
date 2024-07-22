#include <iostream>
#include <stack>
#include <set>
using namespace std;

int main() {
    int q;
    cin >> q;
    
    stack<pair<char, int>> operations;
    set<int> distinct_elements;
    
    while (q--) {
        char query_type;
        cin >> query_type;
        
        if (query_type == '+') {
            int x;
            cin >> x;
            operations.push(make_pair('+', x));
            distinct_elements.insert(x);
        } else if (query_type == '-') {
            int k;
            cin >> k;
            operations.push(make_pair('-', k));
            while (k--) {
                int removed_element = operations.top().second;
                operations.pop();
                distinct_elements.erase(removed_element);
            }
        } else if (query_type == '!') {
            char operation = operations.top().first;
            if (operation == '+') {
                distinct_elements.erase(operations.top().second);
            } else if (operation == '-') {
                int k = operations.top().second;
                while (k--) {
                    int removed_element = operations.top().second;
                    operations.pop();
                    distinct_elements.insert(removed_element);
                }
            }
            operations.pop();
        } else if (query_type == '?') {
            cout << distinct_elements.size() << endl;
        }
    }

    return 0;
}
