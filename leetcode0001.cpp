class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output;
        bool solve = false;
        for(int i=0; i<nums.size()-1; i++){
            output.push_back(i);
            for(int j=i+1; j<nums.size(); j++){
                if((nums[i]+nums[j])==target){
                    output.push_back(j);
                    solve = true;
                    break;
                }
            }
            if(solve){
                break;
            }
            else{
                output.pop_back();
            }
        }
        return output;
    }
};
