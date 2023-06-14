class Solution {
public:
    
    double power(double x, double n){
        if(n == 0) return 1;
        return x * power(x, n - 1);
    }
    
    double myPow(double x, double n) {
        if(n == INT_MAX){
            if(x == 1){
                return 1;
            }
            else if(x == -1){
                return -1;
            }
            else if(x > -1 && x < 1){
                return 0;
            }
        }
        if(n == INT_MIN){
            if(x == 1 || x == -1){
                return 1;
            }
            else{
                return 0;
            }
        }
        if(n > 0){
            double ans = power(x,n);
            return ans;
        }
        else{
            n = -n;
            double ans = 1.0 / power(x,n);
            return ans;
        }
        
    }
};