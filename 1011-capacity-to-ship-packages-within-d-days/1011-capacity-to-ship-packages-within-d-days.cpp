class Solution {
public:
    
    int ndays(vector<int>& weights, int capacity){
        int ans = 1;
        int n = weights.size();
        int temp = 0;
        for(int i = 0; i < n; i++){
            if(temp + weights[i] > capacity){
                ans += 1;
                temp = weights[i];
            }
            else{
                temp += weights[i];
            }
        }
        return ans;
    }
    
    
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = *max_element(weights.begin(), weights.end());
        int high = 0;
        for(auto i: weights){
            high += i;
        }
        
        while(low <= high){
            int mid = (low + high) / 2;
            if(ndays(weights,mid) <= days){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};