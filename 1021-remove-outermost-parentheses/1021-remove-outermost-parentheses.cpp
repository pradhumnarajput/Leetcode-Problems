class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        int n = s.length();
        string ans = "";
        for(int i = 0; i < n; i++){
            char ch = s[i];
            if(ch == '('){
                if(st.size() > 0) ans += ch;
                st.push(ch);
            }
            else{
                st.pop();
                if(st.size() > 0) ans += ch;
            }
        }
        return ans;
    }
};