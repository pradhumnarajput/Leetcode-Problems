class Solution {
public:
    
    int bsearch(vector<int> &nums, int left, int right, int target){
        if(right >= left){
            int mid = left + (right - left) / 2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target){
                return bsearch(nums,mid+1,right,target);
            }
            else{
                return bsearch(nums,left,mid,target);
            }
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        
        while(right >= left){
            int mid = left + (right - left) / 2;
            if(nums[mid] == target) return mid;
            else if (nums[mid] < target) left = mid + 1;
            else right = mid - 1;
        }
        return -1;
    }
};