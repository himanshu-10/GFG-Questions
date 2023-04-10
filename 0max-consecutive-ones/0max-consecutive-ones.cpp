class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
            int currentCount=0;
            int maxCount = 0;
            for(int i=0;i<nums.size();i++){
                     if(nums[i]==1){
                         currentCount++;
                            if(currentCount>maxCount){
                                    maxCount=currentCount;
            }
        }
        else{
            currentCount=0;
        }

    }
    return maxCount;
}
    
};