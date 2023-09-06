class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        int ans;
        // int w = 0;
        // int x = 1;
        // int y = nums.size()-1;
        // int z = nums.size()-2;
        
        return ans = ((nums[nums.size()-1]*nums[nums.size()-2]) - (nums[0]*nums[1]));
        
    }
};