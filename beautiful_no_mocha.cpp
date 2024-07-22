#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);

        for (long long i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long min1 = a[0], min2 = a[1];
        bool isBeautiful = true;

        for (long long i = 0; i < n; ++i)
        {
            if (a[i] % min1 != 0 && a[i] % min2 != 0)
            {
                isBeautiful = false;
                break;
            }
        }

        if (isBeautiful)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}