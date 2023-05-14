class Solution {
private:
    // void solve(vector<int> nums, vector<vector<int>>& ans, int index){
        
        // base case
//         if(index >= nums.size()){
//             ans.push_back(nums);
//             return;
//         }
        
//         for(int i = index; i<nums.size(); i++){
//             swap(nums[index],nums[i]);
//             solve(nums,ans,index+1);
            
//             // backtrack
//             swap(nums[index],nums[i]);       
//         }
    // }
    
    void solve(vector<int>& ds,vector<int>& nums,vector<vector<int>>& ans,int freq[]){
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return;
        }
        
        for(int i =0; i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i] = 1;
                solve(ds,nums,ans,freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
       // vector<vector<int>> ans;
       //  int index = 0;
       //  solve(nums,ans,index);
       //  return ans;
        
        vector<vector<int>>ans;
        vector<int>ds;
        int freq[nums.size()];
        for(int i =0;i<nums.size();i++) freq[i] = 0;
        solve(ds,nums,ans,freq);
        return ans;
    }
};