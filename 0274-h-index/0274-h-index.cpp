class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end(),greater<int>());
        int h=0;
        for(int i=1;i<=citations.size();i++){
            if(citations[i-1]>=i)
                  h++;
        }
   return h; }
};