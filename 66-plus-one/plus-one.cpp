class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        for(int i=n-1;i>=0;i--){
        if(digits[i]==9){
            digits[i]=0;
        }
        else{
            digits[i]=digits[i]+1;
            return digits;
        }
       
    }
    digits.insert(digits.begin(),1);
    return digits;
    }

};

// class Solution {
// public:
    
//     void reverse(vector<int>& arr) {
//         int s = 0, end = arr.size() - 1;
//         while (end > s) {
//             swap(arr[s++], arr[end--]);
//         }
//     }

//     vector<int> plusOne(vector<int>& digits) {
//         vector<int> ans;
//         int i = digits.size() - 1;
//         int carry = 1; 

//         while (i >= 0 || carry > 0) { 
//             int sum = carry;
//             if (i >= 0) {
//                 sum += digits[i]; 
//                 i--;
//             }
//             carry = sum / 10; 
//             sum = sum % 10;    
//             ans.push_back(sum);
//         }

      
//         reverse(ans);

//         return ans;
//     }
// };