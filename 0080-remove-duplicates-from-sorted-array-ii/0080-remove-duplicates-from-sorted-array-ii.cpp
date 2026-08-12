class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      unordered_map<int,int> f;
      int high=0;
      for(high=0;high<nums.size();high++){
         f[nums[high]]++;
         if (f[nums[high]] > 2) {
             nums.erase(nums.begin() + high);
             high--;}


}return nums.size();}};