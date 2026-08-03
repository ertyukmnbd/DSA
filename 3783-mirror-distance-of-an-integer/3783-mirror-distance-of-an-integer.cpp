class Solution {
public:
    int mirrorDistance(int n) {
     int k=0;
     int org=n;
        while(n>0){
          k=k*10 + n%10;
          n=n/10;
        }
       int md= abs(org - k);
    return md; }
};