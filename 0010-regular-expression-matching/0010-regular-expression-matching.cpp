class Solution {
public:
    bool isMatch(string s, string p) {
        int n = s.size();
        int m = p.size();

        vector<vector<int>> dp(n + 1, vector<int>(m + 1, false));

        dp[n][m] = true;

        for (int i = n; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {

                bool firstMatch = (i < n &&
                                  (s[i] == p[j] || p[j] == '.'));

                if (j + 1 < m && p[j + 1] == '*') {

                    dp[i][j] = dp[i][j + 2];

                    if (firstMatch)
                        dp[i][j] = dp[i][j] || dp[i + 1][j];

                } else {
                    dp[i][j] = firstMatch && dp[i + 1][j + 1];
                }
            }
        }

        return dp[0][0];
    }
};