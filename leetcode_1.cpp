#include <iostream>
#include <cstring>

using namespace std;

class Solution {
public:
    #define ll long long 
    ll dp[16][2][2];
    string l, r, S;
    ll lim, sz, len;

    ll rec(ll lvl, ll tlo, ll thi) {
        if (lvl == sz) return 1;
        if (dp[lvl][tlo][thi] != -1) return dp[lvl][tlo][thi];

        ll ans = 0;
        ll lo = 0, hi = lim;

        if (tlo) lo = l[lvl] - '0';
        if (thi) hi = min(hi, 1LL * (r[lvl] - '0'));

        for (int i = lo; i <= hi; i++) {
            int nlo = tlo, nhi = thi;

            if (i != (l[lvl] - '0')) nlo = 0;
            if (i != (r[lvl] - '0')) nhi = 0;

            if (lvl < len) ans += rec(lvl + 1, nlo, nhi);
            else {
                if ((S[lvl - len] - '0') == i) ans += rec(lvl + 1, nlo, nhi);
            }
        }

        return dp[lvl][tlo][thi] = ans;
    }

    long long numberOfPowerfulInt(long long start, long long finish, int limit, string s) {
        l = to_string(start);
        r = to_string(finish);
        string temp = "";
        int cnt = r.size() - l.size();
        while (cnt--) temp += '0';
        l = temp + l;
        memset(dp, -1, sizeof(dp));
        lim = limit;
        sz = r.size();
        S = s;
        len = r.size() - S.size();
        return rec(0, 1, 1);
    }
};

int main() {
    Solution solution;

    // Example
    long long start = 1, finish = 2000;
    int limit = 8;
    string s = "1";
    
    long long result = solution.numberOfPowerfulInt(start, finish, limit, s);
    cout << "Number of powerful integers in the range [" << start << ".." << finish << "] with limit " << limit << " and suffix " << s << ": " << result << endl;

    return 0;
}
