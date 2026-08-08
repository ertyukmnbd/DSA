class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int max= *max_element(nums.begin(), nums.end());
        int min=*min_element(nums.begin(), nums.end());
         vector<int> arr;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if (nums[i] != min){
                arr.push_back(min);
                i--;}
             min++;       
        }
   return arr; }
};