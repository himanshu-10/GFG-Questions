class Solution {
public:
    
    void findCombination(int index, int target,vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds){
        
        // base case
        if(index == arr.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        
        // pick the element
        if(arr[index] <= target){
            // push into ds data structure
            ds.push_back(arr[index]);
            // recursie call
            findCombination(index, target - arr[index], arr, ans, ds);
            // backtracking
            ds.pop_back();
            
        }
        // not pick that element
        findCombination(index+1, target, arr, ans, ds);
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        // take data structure to store all the combination
        vector<vector<int>>ans;
        // take data structure to store a single combination target
        vector<int>ds;
        findCombination(0, target, candidates, ans, ds);
        return ans;
    }
};