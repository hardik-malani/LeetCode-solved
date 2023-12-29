class Solution {
public:
    bool isPalindrome(int x) {
        if(x>=0){
            int pal = x;
            long int check = 0;
            while(pal!=0){
                int d = pal % 10;
                check = check*10+d;
                pal/=10;
            }
            if(check == x){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
};