class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j;
        int cm=0;
        int off=0;
        while (cm < n) {
            if (nums[cm] ==0) {
                cm++;
                j++;
                continue;
            }

            nums[off] = nums[cm];
            off++;
            cm++;
        }
        for(int i=n-j;i<n;i++){
            nums[i]=0;

        }

        }
};