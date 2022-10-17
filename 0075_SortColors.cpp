//Sort Colors

class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int> counts;
        
        for(int i=0; i<nums.size(); i++){
            counts[nums[i]]++;
        }
        
        nums.clear();
        
        for(int i=0; i<counts[0]; i++){
            nums.push_back(0);
        }
        
        for(int i=0; i<counts[1]; i++){
            nums.push_back(1);
        }
        
        for(int i=0; i<counts[2]; i++){
            nums.push_back(2);
        }
    }
};
