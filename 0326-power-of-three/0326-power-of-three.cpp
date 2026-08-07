class Solution {
public:
    bool isPowerOfThree(int n) {
        bool a =1;
        if(n<1)
          a=0;
        while (n > 1) {
            if (n % 3 != 0)
                 a=0 ;

            n = n / 3;
        }
     
        
        return a;
    }
};  
    