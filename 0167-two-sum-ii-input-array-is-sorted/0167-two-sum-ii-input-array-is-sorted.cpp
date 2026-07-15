class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      int i=0,j,n,sum;
    
      n=numbers.size();
      j=n-1;
      while(i<j){
        sum=numbers[i]+numbers[j];
        if(sum==target){
         return {i+1,j+1};
        }
        else if(sum<target)
         i++;
        else if(sum>target)
         j--;
      }
     return {};
    }
};