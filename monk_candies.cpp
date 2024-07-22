#include <bits/stdc++.h>
using namespace std;

int main() {
    int testcases;
    cin>>testcases;
    while (testcases--)
    {
        long long n,time;
        cin>>n>>time;
        multiset<long long> candies;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            candies.insert(x);
        }
        long long eat=0;
        for (int i = 0; i < time; i++)
        {
            auto it=(--candies.end());
            long long candy_max=*it;
            cout<<candy_max;
            eat+=candy_max;
            candies.erase(it);
            candies.insert(candy_max/2);
        }
        cout<<eat<<endl;
    }
    
    return 0;
}