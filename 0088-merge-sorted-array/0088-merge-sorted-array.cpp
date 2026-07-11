class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int> nums3(m + n);

        int l = 0, r = 0, i = 0;

        while (l < m && r < n) {
            if (nums1[l] <= nums2[r])
                nums3[i++] = nums1[l++];
            else
                nums3[i++] = nums2[r++];
        }

        while (l < m)
            nums3[i++] = nums1[l++];

        while (r < n)
            nums3[i++] = nums2[r++];

        for (int j = 0; j < m + n; j++)
            nums1[j] = nums3[j];
    }
};