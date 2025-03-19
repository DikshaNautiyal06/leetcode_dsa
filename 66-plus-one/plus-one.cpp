class Solution {
public:
    // Function to reverse a vector in-place
    void reverse(vector<int>& arr) {
        int s = 0, end = arr.size() - 1;
        while (end > s) {
            swap(arr[s++], arr[end--]);
        }
    }

    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int i = digits.size() - 1;
        int carry = 1; // Start with 1, since we are adding one

        while (i >= 0 || carry > 0) { 
            int sum = carry; // Start with carry
            if (i >= 0) {
                sum += digits[i]; // Add digit if within bounds
                i--;
            }
            carry = sum / 10; // Carry for next iteration
            sum = sum % 10;    // Store last digit
            ans.push_back(sum);
        }

        // Reverse ans to get the correct order
        reverse(ans);

        return ans;
    }
};
