class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreater; // Map to store next greater element for nums2 elements
        stack<int> st; // Stack to maintain decreasing sequence
        
        // Traverse nums2 and populate nextGreater map
        for (int num : nums2) {
            while (!st.empty() && st.top() < num) {
                nextGreater[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }
        
        // For remaining elements in stack, there is no next greater element
        while (!st.empty()) {
            nextGreater[st.top()] = -1;
            st.pop();
        }
        
        // Construct result for nums1 based on the map
        vector<int> result;
        for (int num : nums1) {
            result.push_back(nextGreater[num]);
        }
        
        return result;
    }
};
