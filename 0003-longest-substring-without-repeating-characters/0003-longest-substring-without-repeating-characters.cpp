class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> f;

        int low = 0;
        int ans = 0;

        for (int high = 0; high < s.size(); high++) {

            f[s[high]]++;

            while (f[s[high]] > 1) {
                f[s[low]]--;
                low++;
            }

            ans = max(ans, high - low + 1);
        }

        return ans;
    }
};