class Solution {
public:
    int longestValidParentheses(string s) {
        stack<pair<char, int>> st;
        vector<bool> vec(s.length(), false);
       
        for (size_t i = 0; i < s.length(); i++) {

            if (s[i] == '(') {
                st.push({s[i], i});
            }else {
                if(!st.empty() && st.top().first == '(') {
                    vec[i] = true;
                    vec[st.top().second] = true;
                    st.pop();
                }
            }
        }

        int res = 0;
        int cur = 0;
        for (bool a : vec) {
            // 
            cout << a;
            if (a == true) {
                cur++;
            }else {
                res = max(res, cur);
                cur = 0;
            }
        }

        res = max(res, cur);

        return res;
    }
};
