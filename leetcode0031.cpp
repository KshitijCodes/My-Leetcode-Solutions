//Next Permutation

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(), breaking = -1;
        for(int i=n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                breaking = i;
                break;
            }
        }
        if(breaking<0){
            sort(nums.begin(), nums.end());
        }
        else{
            for(int i=n-1; i>breaking; i--){
                if(nums[i]>nums[breaking]){
                    swap(nums[i],nums[breaking]);
                    break;
                }
            }
            
            sort(nums.begin()+breaking+1, nums.end());
        }
    }
};
