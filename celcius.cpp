#include <iostream>
#include <vector>

using namespace std;

class celcius {
public:
    vector<double> converttemp(double celsius) {
        double k;
        double f;
        k = celsius + 273.15;
        f = celsius * 1.80 + 32.00;
        vector<double> v;
        v.push_back(k);
        v.push_back(f);
        return v;
    }
};

int main() {
    celcius c;
    vector<double> result = c.converttemp(36.50);
    cout << "Temperature in Kelvin: " << result[0] << endl;
    cout << "Temperature in Fahrenheit: " << result[1] << endl;
    return 0;
}
