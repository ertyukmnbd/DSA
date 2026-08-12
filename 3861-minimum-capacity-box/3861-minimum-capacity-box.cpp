class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int small = INT_MAX, pos=-1;
        for(int i=0;i<capacity.size();i++){
            if(capacity[i]>=itemSize){
                if(capacity[i]<small){
                   pos=i;
                   small=capacity[i];
                }
            }}
   return pos; }
};