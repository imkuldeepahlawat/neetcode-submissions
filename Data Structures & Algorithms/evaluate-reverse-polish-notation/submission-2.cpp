class Solution {
   public:
    int oprate(int a, int b, string token) {
        if (token == "+")
            return a + b;
        else if (token == "-")
            return a - b;
        else if (token == "*")
            return (long)a * (long)b;
        else if (token == "/") {
            if (b == 0) {
                cout << "Division by zero! a = " << a << endl;
            }
            return a / b;
        } else
            return -1;
    };
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for (auto token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                int ans = oprate(a, b, token);
                st.push(ans);
            } else {
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};
