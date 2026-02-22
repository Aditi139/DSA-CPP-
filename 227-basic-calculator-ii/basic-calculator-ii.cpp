class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        long number = 0;
        char sign = '+';

        for (int i = 0; i < s.length(); i++) {

            if (isdigit(s[i])) {
                number = number * 10 + (s[i] - '0');
            }

            if ((!isdigit(s[i]) && s[i] != ' ') || i == s.length() - 1) {

                if (sign == '+') {
                    st.push(number);
                }
                else if (sign == '-') {
                    st.push(-number);
                }
                else if (sign == '*') {
                    int top = st.top(); st.pop();
                    st.push(top * number);
                }
                else if (sign == '/') {
                    int top = st.top(); st.pop();
                    st.push(top / number);  
                }

                sign = s[i];
                number = 0;
            }
        }

        int result = 0;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }

        return result;
    }
};