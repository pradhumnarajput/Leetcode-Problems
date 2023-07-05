class Solution {
public:
    
    int nsum(vector<int>& nums, int cap){
        int n = nums.size();
        int ans = 0;
        int temp = 0;
        for(int i = 0; i < n; i++){
            if(temp + nums[i] > cap){
                ans += 1;
                temp = nums[i];
            }
            else temp += nums[i];
        }
        return ans;
        
    }
    
    
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        
        while(low <= high){
            int mid = (low+high)/2;
            int days = nsum(nums,mid);
            if(days >= k) low = mid + 1;
            else high = mid - 1;
        }
        return low;
    }
};