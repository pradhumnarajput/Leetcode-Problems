class Solution {
public:
    
    bool possible(vector<int>& bloomDay, int day, int m, int k){
        int cnt = 0, total = 0;
        int n = bloomDay.size();
        for(int i = 0; i < n; i++){
            if(bloomDay[i] <= day) cnt++;
            else{
                total += cnt/k;
                cnt = 0;
            }
        }
        total += cnt/k;
        return total >= m;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long val = m * 1LL * k * 1LL;
        int n = bloomDay.size();
        if(n < val) return -1;
        int ans = -1;
        int mn = INT_MAX, mx = INT_MIN;
        for(int i = 0; i < n; i++){
            mn = min(mn, bloomDay[i]);
            mx = max(mx, bloomDay[i]);
        }
        
        int low = mn, high = mx;
        while(low <= high){
            int mid = (low+high) / 2;
            if(possible(bloomDay, mid, m, k)){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};