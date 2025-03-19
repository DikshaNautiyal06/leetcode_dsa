// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         vector<int> arr; 
        
       
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] != val) {
//                 arr.push_back(nums[i]);
//             }
//         }

//         for (int i = 0; i < arr.size(); i++) {
//             nums[i] = arr[i]; 
//         }

//         return arr.size(); 
//     }
// };

class Solution{
    public:
    int removeElement(vector<int>& nums, int val){
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};
