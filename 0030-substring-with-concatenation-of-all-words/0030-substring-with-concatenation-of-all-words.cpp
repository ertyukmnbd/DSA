class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {

        vector<int> ans;

        int wordLen = words[0].size();
        int wordCount = words.size();
        int totalLen = wordLen * wordCount;

        unordered_map<string, int> need;

        for (string word : words)
            need[word]++;

        // Try each possible starting offset
        for (int start = 0; start < wordLen; start++) {

            int left = start;
            int count = 0;

            unordered_map<string, int> have;

            for (int right = start;
                 right + wordLen <= s.size();
                 right += wordLen) {

                string word = s.substr(right, wordLen);

                // Word is not in words
                if (need.find(word) == need.end()) {
                    have.clear();
                    count = 0;
                    left = right + wordLen;
                    continue;
                }

                have[word]++;
                count++;

                // Too many copies of this word
                while (have[word] > need[word]) {

                    string leftWord = s.substr(left, wordLen);

                    have[leftWord]--;
                    left += wordLen;
                    count--;
                }

                // Exactly all words
                if (count == wordCount) {
                    ans.push_back(left);

                    // Move left to look for another answer
                    string leftWord = s.substr(left, wordLen);
                    have[leftWord]--;
                    left += wordLen;
                    count--;
                }
            }
        }

        return ans;
    }
};