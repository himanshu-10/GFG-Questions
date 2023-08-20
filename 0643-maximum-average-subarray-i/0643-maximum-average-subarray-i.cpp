class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg;
        double ans = INT_MIN;
        double temp = 0;
        
        int i =0,j=0;
        
        while(j<nums.size()){
            
            temp+=nums[j];
            
            if(j-i+1 < k){
                j++;
            }else if(j-i+1 == k){
                avg = temp/k;
                ans = max(ans,avg);
                
                temp-=nums[i];
                i++;
                j++;
            }
            
            
        }
        return ans;
    }
};