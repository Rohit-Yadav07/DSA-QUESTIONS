#include <iostream>
#include <vector>
#include <string>
using namespace std;

string findCommonTownName(vector<string>& people) {
    if (people.empty()) {
        return ""; // Return empty string if there are no names
    }

    int rows = people.size();
    int cols = people[0].length();
    string common_prefix = "";

    for (int j = 0; j < cols; j++) {
        char ch = people[0][j];

        for (int i = 1; i < rows; i++) {
            if (j >= people[i].length() || people[i][j] != ch) {
                return common_prefix; // Return the common prefix found so far
            }
        }

        common_prefix += ch;
    }

    return common_prefix; // Return the common prefix if all names match up to the end
}

int main() {
    vector<string> people = {"Rosewood", "rose", "rosy", "rosemarry", "roshh"};
    string commonTown = findCommonTownName(people);
    cout << commonTown << endl; // Output: ros
    return 0;
}
