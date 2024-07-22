#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
    unordered_map<int, vector<vector<int>>> dp;
    int solution(int k, int i, int j, bool c) {
        if (i > k + 5) return 0;
        if (j > 31) return 0;
        if (dp.count(i) && dp[i][j][c] != -1) return dp[i][j][c];

        int ans = (i == k);
        if (c){
         ans += solution(k, i - 1, j, 0);
         }
        if (i + (1 << j) <= k + 1){
         ans += solution(k, i + (1 << j), j + 1, 1);
        }
        dp[i].resize(32, vector<int>(2, -1));

        return dp[i][j][c] = ans;
    }
public:
    int waysToReachStair(int k) {
        return solution(k, 1, 0, 1);
    } 
};
