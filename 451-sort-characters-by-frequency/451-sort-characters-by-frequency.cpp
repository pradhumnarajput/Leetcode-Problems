class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        int n = s.length();
        for(int i = 0; i < n; i++){
            mp[s[i]]++;
        }
        vector<pair<int,char>> v;
        for(auto i: mp){
            v.push_back({i.second, i.first});
        }
        string ans = "";
        sort(v.begin(), v.end());
        for(int i = v.size()-1; i >= 0 ; i--){
            char c = v[i].second;
            int freq = v[i].first;
            while(freq--){
                ans += c;
            }
        }
        return ans;
    }
};