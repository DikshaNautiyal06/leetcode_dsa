class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0; // Handle empty array

        int i = 0; // Slow pointer
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) { // Found a new unique element
                i++; // Move slow pointer to the next position
                nums[i] = nums[j]; // Update nums[i] with the new unique value
            }
        }
        return i + 1; // Return the number of unique elements
    }
};
