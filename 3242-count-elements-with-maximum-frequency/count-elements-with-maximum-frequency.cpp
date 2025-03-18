class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> count;
        vector<int>res;
        int sum=0;
        int maxFreq=0;
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
            maxFreq=max(maxFreq,count[nums[i]]);
        }
        for(auto it:count){
            if(maxFreq==it.second){
            res.push_back(it.second);}
        }
        for(int i=0;i<res.size();i++){
            sum+=res[i];
            
        }
        return sum;
    }
};