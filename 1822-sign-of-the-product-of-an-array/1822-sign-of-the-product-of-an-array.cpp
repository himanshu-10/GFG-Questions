class Solution {
public:
    int arraySign(vector<int>& nums) {

         int countMinus = 0;
         for(int i = 0 ; i < nums.size() ; i ++){
            if(nums[i] == 0){
                return 0; // return 0 if we found a 0 in the array
            }
            if(nums[i] < 0){
                countMinus++; //increment the count wehn we found a negative number
            }
        }
        //check if countMinus is multiple of 2 then return 1 else return -1
        return countMinus % 2 == 0 ? 1 : -1;
        
    }
};