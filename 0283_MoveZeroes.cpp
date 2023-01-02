class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                for(int j=0; j<i; j++){
                    if(nums[j]==0){
                        std::swap(nums[i],nums[j]);
                    }
                }
            }
        }
    }
};
