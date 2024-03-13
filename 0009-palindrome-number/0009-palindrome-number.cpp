class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        
        long int temp = x;
        long int result = 1;
        result = temp % 10;
        temp/=10;
        while(temp > 0)
        {
            result = result * 10 + temp%10; 
            temp/=10;
        }
        if(result == x)
        {
            return true;
        }
        return false;
    }
};