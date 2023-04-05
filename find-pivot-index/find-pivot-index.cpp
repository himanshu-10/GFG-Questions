class Solution {
public:
    int pivotIndex(vector<int>& nums) {
         int leftSum;
         int rightSum ;
        for(int i = 0;i<nums.size();++i){
            leftSum = 0;
            for(int j = 0 ; j<i;j++){
                
                leftSum  = leftSum + nums[j];
            }
            rightSum = 0;
            for(int j = i+1 ; j<nums.size();j++){
                rightSum  = rightSum + nums[j];
            }

            if(leftSum == rightSum){
                return i;
            }
            
        }
        return -1;

        
    // int i, j;
    // int n = nums.size();
    // int leftsum, rightsum;
 
    // /* Check for indexes one by one until
    // an equilibrium index is found */
    // for (i = 0; i < n; ++i) {
 
    //     /* get left sum */
    //     leftsum = 0;
    //     for (j = 0; j < i; j++)
    //         leftsum += nums[j];
 
    //     /* get right sum */
    //     rightsum = 0;
    //     for (j = i + 1; j < n; j++)
    //         rightsum += nums[j];
 
    //     /* if leftsum and rightsum
    //     are same, then we are done */
    //     if (leftsum == rightsum)
    //         return i;
    // }
 
    // /* return -1 if no equilibrium
    // index is found */
    // return -1;
    }
};