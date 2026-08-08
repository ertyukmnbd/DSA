class Solution {
public:
    int addDigits(int num) {
        int digit=num;
        int sum=0;
      while( digit>0){
           sum += digit%10;
            digit/=10;
      }
         if(sum<10)
               return sum;
            else
               return addDigits(sum);
    }
};