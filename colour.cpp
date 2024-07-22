#include <bits/stdc++.h>
using namespace std;
vector<long long> solve(long long a)
{
    vector<long long> v;
    while (a != 0)
    {
        if (a % 2 == 0)
        {
            v.push_back(0);
            a /= 2;
        }
        else if (a % 4 == 1 || a == 1)
        {
            v.push_back(1);
            a = (a - 1) / 2;
        }
        else
        {
            v.push_back(-1);
            a = (a + 1) / 2;
        }
    }
    return v;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long a;
        cin >> a;
        vector<long long> v = solve(a);
        cout << v.size() << endl;
        for (long long i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
