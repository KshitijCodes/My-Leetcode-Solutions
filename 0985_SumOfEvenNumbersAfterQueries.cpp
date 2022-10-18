//Sum of Even Numbers After Queries

class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> answer;
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            if((nums[i]&1)==0){
                sum+=nums[i];
            }
        }
        for(int i=0; i<queries.size(); i++){
            if((nums[queries[i][1]]&1)==0){
                sum-=nums[queries[i][1]];
            }
            nums[queries[i][1]]+=queries[i][0];
            if((nums[queries[i][1]]&1)==0){
                sum+=nums[queries[i][1]];
            }
            answer.push_back(sum);
            
        }
        return answer;
    }
};
