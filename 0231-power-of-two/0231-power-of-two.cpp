class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool a =1;
        if(n<1)
          a=0;
        while (n > 1) {
            if (n % 2 != 0)
                 a=0 ;

            n = n / 2;
        }
     
        
        return a;
    }
};