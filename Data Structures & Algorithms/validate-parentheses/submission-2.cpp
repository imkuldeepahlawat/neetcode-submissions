class Solution {
public:
    
bool isValid(string s) {
    stack<char> st;

    for (auto ch : s) {
        // If opening bracket, push it
        if (ch == '(' || ch == '[' || ch == '{') {
            st.push(ch);
        }
        else {
            // No opening bracket to match
            if (st.empty()) return false;

            char top = st.top();

            if ((ch == ')' && top == '(') ||
                (ch == ']' && top == '[') ||
                (ch == '}' && top == '{')) {
                st.pop();
            }
            else {
                return false;
            }
        }
    }

    return st.empty();
}

};
