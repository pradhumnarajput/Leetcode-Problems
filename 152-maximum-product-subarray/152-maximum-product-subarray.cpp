class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mxr = nums[0];
        int mxl = nums[0];
        int ans;
        int n = nums.size();
        int flag = 0;
        int prod = 1;
        for(int i = 0; i < n; i++){
            prod *= nums[i];
            if(nums[i] == 0){
                flag = 1;
                prod = 1;
                continue;
            }
            mxl = max(mxl,prod);
        }
        
        prod = 1;
        for(int i = n-1; i >=0; i--){
            prod *= nums[i];
            if(nums[i] == 0){
                flag = 1;
                prod = 1;
                continue;
            }
            mxr = max(mxr, prod);
        }
        if(flag) ans = max(max(mxl,mxr),0);
        else ans = max(mxl,mxr);
        return ans;
        
    }
};