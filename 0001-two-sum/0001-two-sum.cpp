class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // map approach
        unordered_map<int,int>m;
        for(int i = 0; i<nums.size();i++){
            int num = nums[i];
            int more = target - num;
            if(m.find(more) != m.end()){
                return {m[more],i};
            }
            m[num] = i;
        }
        return {-1,-1};
        
    }
};