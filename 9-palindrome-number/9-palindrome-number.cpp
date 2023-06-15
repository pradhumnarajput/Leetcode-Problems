class Solution {
public:
    bool isPalindrome(long long x) {
        if(x < 0 || (x != 0 && x % 10 == 0)) return false;
        int half = 0;
        while(half < x){
            half = half * 10 + x % 10;
            x = x / 10;
        }
        return (half == x || x == half/10);
    }
};