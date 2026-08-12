class Solution {
public:
    int strStr(string haystack, string needle) {
        int k=-1;
           for (int i = 0; i < haystack.size(); i++) {

            if (haystack[i] == needle[0]) {

                bool found = true;

                for (int j = 0; j < needle.size(); j++) {
                    if (i + j >= haystack.size() ||
                        haystack[i + j] != needle[j]) {
                        found = false;
                        break;
                    }
                }

                if (found) {
                    k = i;
                    break;
                }
            }
        }

        return k;
   }
};