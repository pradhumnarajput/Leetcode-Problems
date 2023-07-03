class Solution {
public:
    
    int sum(vector<int>& nums, int d){
        int n = nums.size();
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans += ceil((double)nums[i] / (double)d);
        }
        return ans;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int ans = INT_MAX;
        int low = 1, high = *max_element(nums.begin(), nums.end());
        while(low <= high){
            int mid = (low + high) / 2;
            if(sum(nums,mid) <= threshold){
                high = mid - 1;
                ans = mid;
            }
            else low = mid + 1;
        }
        return ans;
    }
};