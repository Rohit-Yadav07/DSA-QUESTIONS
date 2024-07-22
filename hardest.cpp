#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int modInverse(int a, int m) {
    int m0 = m, t, q;
    int x0 = 0, x1 = 1;

    if (m == 1)
        return 0;

    while (a > 1) {
        q = a / m;
        t = m;

        m = a % m, a = t;
        t = x0;

        x0 = x1 - q * x0;
        x1 = t;
    }

    if (x1 < 0)
        x1 += m0;

    return x1;
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> c(n);
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
        }

        string s;
        cin >> s;

        vector<int> initial_hand, draw_pile;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') initial_hand.push_back(c[i]);
            else draw_pile.push_back(c[i]);
        }

        int hand_size = initial_hand.size();
        int pile_size = draw_pile.size();

        vector<vector<double>> dp(hand_size + 1, vector<double>(pile_size + 1, 0));
        dp[0][0] = 1.0;

        for (int i = 0; i <= hand_size; ++i) {
            for (int j = 0; j <= pile_size; ++j) {
                if (i == 0 && j == 0) continue;
                if (i > 0) {
                    int x = initial_hand[i-1];
                    if (x <= j) {
                        double add_prob = dp[i-1][j-x] / tgamma(x + 1);
                        for (int k = 0; k < x; ++k) {
                            dp[i][j] += add_prob;
                        }
                    }
                }
                if (j > 0) {
                    int x = draw_pile[j-1];
                    if (x <= i) {
                        double add_prob = dp[i-x][j-1] / tgamma(x + 1);
                        for (int k = 0; k < x; ++k) {
                            dp[i][j] += add_prob;
                        }
                    }
                }
            }
        }

        double p = dp[hand_size][pile_size];
        double q = 1.0;
        for (int i = 1; i <= hand_size; ++i) {
            q *= i;
        }
        for (int j = 1; j <= pile_size; ++j) {
            q *= j;
        }

        long long P = static_cast<long long>(p * q) % MOD;
        long long Q = static_cast<long long>(q) % MOD;
        long long Q_inv = modInverse(Q, MOD);

        cout << (P * Q_inv % MOD) << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
