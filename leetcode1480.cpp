//1480. Running sum of 1D Array

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            result.push_back(sum);
        }
        return result;
    }
};
