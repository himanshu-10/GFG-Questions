class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        // sort the array
        sort(nums.begin(),nums.end());
        int i =0;
        int j  =0 ;
        // int windowSize = 0;
        int mini = INT_MAX;
        
//        for(int j = 0; j<nums.size();j++){
//             windowSize++;
//             if(windowSize < k) continue;
            
//            // window hit
//            mini = min(mini, nums[j] - nums[i]);
//            i++;
            
//         }
        
        while(j < nums.size()){
            if(j-i+1 < k){
                j++;
            }else{
                mini = min(mini,nums[j] - nums[i]);
                i++;
                j++;
            }
        }
        return mini;
        
        
      
    }
};