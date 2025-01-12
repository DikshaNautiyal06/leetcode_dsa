class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
    stack<int> st;  // Stack to store indices
    int max_area = 0;
    int n = heights.size();

    for (int i = 0; i < n; ++i) {
        // While the current bar is smaller than the bar at the top of the stack
        while (!st.empty() && heights[i] < heights[st.top()]) {
            int height = heights[st.top()];
            st.pop();
            // Calculate width: if the stack is empty, width is i; else, it's the distance to the next smaller bar
            int width = st.empty() ? i : i - st.top() - 1;
            max_area = max(max_area, height * width);
        }
        st.push(i);
    }

    // Process remaining bars in the stack
    while (!st.empty()) {
        int height = heights[st.top()];
        st.pop();
        int width = st.empty() ? n : n - st.top() - 1;
        max_area = max(max_area, height * width);
    }

    return max_area;
}

};