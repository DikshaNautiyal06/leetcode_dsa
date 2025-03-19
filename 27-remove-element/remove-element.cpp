class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> arr; // Temporary array to store elements that are not equal to val
        
        // Collect elements that are not equal to val
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                arr.push_back(nums[i]);
            }
        }

        // Copy elements from arr back to nums
        for (int i = 0; i < arr.size(); i++) {
            nums[i] = arr[i]; // Overwriting nums with the filtered values
        }

        return arr.size(); // Returning new length of nums
    }
};
