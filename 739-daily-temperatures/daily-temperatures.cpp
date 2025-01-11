class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> result(n, 0); // Initialize result with zeros
        stack<pair<int, int>> st; // Stack to store {temperature, index}

        for (int i = 0; i < n; ++i) {
            // Pop elements from the stack if the current temperature is higher
            while (!st.empty() && st.top().first < temperatures[i]) {
                int prevIndex = st.top().second;
                result[prevIndex] = i - prevIndex; // Calculate the number of days
                st.pop();
            }
            // Push the current temperature and index onto the stack
            st.push({temperatures[i], i});
        }

        return result;
    }
};
