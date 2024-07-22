#include <iostream>
int main() {
    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i) {
        int a, b, c;
        std::cin >> a >> b >> c;

        if (a > b) {
            std::cout << "First\n";
        } else if (b > a) {
            std::cout << "Second\n";
        } else {
            if (c % 2 == 0) {
                std::cout << "Second\n";
            } else {
                std::cout << "First\n";
            }
        }
    }

    return 0;
}
