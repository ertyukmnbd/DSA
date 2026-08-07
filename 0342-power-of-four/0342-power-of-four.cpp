class Solution {
public:
    bool isPowerOfFour(int n) {
         bool a =1;
        if(n<1)
          a=0;
        while (n > 1) {
            if (n % 4 != 0)
                 a=0 ;

            n = n / 4;
        }
     
        
        return a;
    }
};