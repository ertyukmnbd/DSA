class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0,j=0;
        int len=0;
        int maxlen=0;
        while(j<nums.size()){
            if(nums[j]==1){
                len=j-i+1;
               maxlen= max(maxlen,len);
                   j++;
            }
        else{
           j++;
           i=j;}


        }
   return maxlen; }
};