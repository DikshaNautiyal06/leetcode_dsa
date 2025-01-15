class Solution {
public:
    bool isValid(string s) {
        // Use a stack to keep track of opening brackets
        stack<char> st;
        
        // Iterate through each character in the string
        for (char c : s) {
            // Push opening brackets onto the stack
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                // If stack is empty or top of stack doesn't match, return false
                if (st.empty()) return false;
                char top = st.top();
                st.pop();
                if ((c == ')' && top != '(') || 
                    (c == '}' && top != '{') || 
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }
        
        // If the stack is empty, all brackets are matched, so return true
        return st.empty();
    }
};
