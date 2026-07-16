class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty())
            return 0;

        int off = 0;
        int cm = 1;
        int n = nums.size();

        while (cm < n) {
            if (nums[cm] == nums[cm - 1]) {
                cm++;
                continue;
            }

            nums[off + 1] = nums[cm];
            off++;
            cm++;
        }

        return off + 1;
    }
};