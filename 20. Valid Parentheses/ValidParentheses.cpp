class Solution {
public:
    bool isValid(string s) {
        
        stack<char> st;
        for (char& a : s) {
            if (a == '(' || a == '{' || a == '[') {
                
                st.push(a);
            }
            
            if (a == ')') {
                if (st.empty()) {
                    return false;
                }
               if (st.top() == '(') {
                   st.pop();
               }else {
                   return false;
               }
            }else if (a == '}') {

                if (st.empty()) {
                    return false;
                }

                if (st.top() == '{') {
                    st.pop();
                }else {
                    return false;
                }
            }else if (a == ']') {

                if (st.empty()) {
                    return false;
                }

               if (st .top() == '[') {
                   st.pop();
               }else {
                   return false;
               }
            }
        }

        if (!st.empty()) {
            return false;
        }

        return true;
    }
};
