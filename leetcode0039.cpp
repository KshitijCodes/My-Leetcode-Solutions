//Combination Sum

class Solution {
public:
    void findCombination(int index, int target, vector<int> &arr, vector<vector<int>> &answer, vector<int> &ds){
        if(index == arr.size()){
            if(target == 0){
                answer.push_back(ds);
            }
            return;
        }
        
        if(arr[index]<=target){
            ds.push_back(arr[index]);
            findCombination(index, target - arr[index], arr, answer, ds);
            ds.pop_back();
        }
        
        findCombination(index + 1, target, arr, answer, ds);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> answer;
        vector<int> ds;
        findCombination(0,target,candidates,answer,ds);
        return answer;
    }
};

//Studied from Striver's Recursion and Backtracking Series
