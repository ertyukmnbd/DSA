class Solution {
public:


    int maxSubarrayLength(vector<int>& nums, int k) {
       unordered_map<int, int> f;
        int low=0,high=0;
        int maxlen=0;
        for( high=0;high<nums.size();high++){
            f[nums[high]]++;
             while (f[nums[high]] > k) {
                f[nums[low]]--;
                low++;
            }

            int len=high-low+1;
            maxlen=max(maxlen,len);


        }
   return maxlen; }
};