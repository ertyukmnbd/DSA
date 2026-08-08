class Solution {
public:
    string convertToBase7(int num) {
string str;
if(num == 0) return "0";
  int n=abs(num);
    while(n >0){
            str += char('0' + n % 7);
            n/=7;
        }
         
          reverse(str.begin(), str.end());
           if(num < 0)
           str = "-" + str;
   return str; }
};