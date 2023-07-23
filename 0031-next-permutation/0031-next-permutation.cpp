class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        // APPROACH 1 : USING STL
        // next_permutation(nums.begin(),nums.end());
        
        // APPROACH 2
        
        int breakPoint = -1;
        
        // Step 1: find break point
        for(int i = nums.size()-1; i>0; i--){
            if(nums[i] > nums[i-1]){
                breakPoint = i-1;
                break;
            }
        }
        
        // step 2: if no break point
        if(breakPoint < 0){
            reverse(nums.begin(),nums.end());
            return;
        }
        
        // step 3: if breakpoint exist
        for(int i = nums.size()-1;  i>0; i--){
            if(nums[i] > nums[breakPoint]){
                swap(nums[i],nums[breakPoint]);
                reverse(nums.begin() + breakPoint +1 , nums.end());
                break;
            }
            
        }
        
        
       
    }
};