class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>m;
        int n = nums.size();
        
        for(int i = 0; i<n;i++){
            m[nums[i]]++;
        }
        
        for(auto i: m){
            if(i.second > 1){
                ans.push_back(i.first);
            }
        }
        return ans;
        
    }
};