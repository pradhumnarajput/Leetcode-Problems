class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        string ans = "";


        int left = 0;
        while (s[left] == ' ') {
            left++;
        }


        int right = s.length() - 1;
        while (s[right] == ' ') {
            right--;
        }

        while (left <= right) {
            if (s[left] != ' ') {
                temp += s[left];
            }
            else {
                if (s[left - 1] == ' ') {
                    left++;
                    continue;
                }
                else {
                    ans = temp + " " + ans;
                    temp = "";
                }
            }
            left++;
        }
        ans = temp + " " + ans;
        ans.pop_back(); 
        return ans;
    }
};